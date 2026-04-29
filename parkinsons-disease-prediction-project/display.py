# final_dashboard.py
import pandas as pd
import matplotlib.pyplot as plt
import numpy as np
from sklearn.model_selection import train_test_split
from sklearn.metrics import classification_report, accuracy_score

# -------------------------------
# Load your dataset with predictions
# -------------------------------
feature_df = pd.read_csv("all_features_with_predictions.csv")  # Use your CSV path

# Specify the prediction column you want to visualize
pred_col = "Random_Forest_Predicted"  # Change if needed

# Stage mapping
stage_names = {0: "Normal", 1: "Early", 2: "Mild", 3: "Severe"}
stage_colors = {"Normal": "lightgreen", "Early": "lightblue", "Mild": "orange", "Severe": "red"}

# Map numeric to stage names (for visualization)
feature_df['True_Stage_Name'] = feature_df['Stage'].map(stage_names)
feature_df['Predicted_Stage_Name'] = feature_df[pred_col].map(stage_names)

# -------------------------------
# Split test set
# -------------------------------
X = feature_df.drop(columns=["Stage", "Logistic_Regression_Predicted",
                             "Decision_Tree_Predicted", "Random_Forest_Predicted", "SVM_Predicted"], errors='ignore')
y = feature_df["Stage"]

X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)
test_indices = y_test.index
test_results = feature_df.loc[test_indices, ["True_Stage_Name", "Predicted_Stage_Name"]]

# -------------------------------
# Handle invalid predictions safely
# -------------------------------
y_pred_numeric = feature_df.loc[test_indices, pred_col]
y_true_numeric = y_test

if y_pred_numeric.empty:
    print("No predictions found in the test set. Cannot compute classification report.")
else:
    # Keep only valid numeric labels
    valid_mask = y_pred_numeric.isin([0,1,2,3])
    y_pred_numeric = y_pred_numeric[valid_mask]
    y_true_numeric = y_true_numeric[valid_mask]

    if y_pred_numeric.empty:
        print("No valid numeric predictions found. Check your pred_col and CSV.")
    else:
        # Classification report
        print("Classification Report (Test Set):")
        print(classification_report(y_true_numeric, y_pred_numeric, target_names=list(stage_names.values())))

# -------------------------------
# Prepare counts for charts
# -------------------------------
true_counts_test = test_results['True_Stage_Name'].value_counts().reindex(stage_names.values(), fill_value=0)
pred_counts_test = test_results['Predicted_Stage_Name'].value_counts().reindex(stage_names.values(), fill_value=0)
true_counts_all = feature_df['True_Stage_Name'].value_counts().reindex(stage_names.values(), fill_value=0)
pred_counts_all = feature_df['Predicted_Stage_Name'].value_counts().reindex(stage_names.values(), fill_value=0)
pred_counts_all_nonzero = pred_counts_all[pred_counts_all > 0]

x = np.arange(len(stage_names))
width = 0.35

# -------------------------------
# Model accuracy example (update if you have real accuracies)
# -------------------------------
# model_accuracies = {
#     "Logistic Regression": 0.918,
#     "Decision Tree": 0.938,
#     "Random Forest": 0.938,
#     "SVM": 0.898
# }

acc_df = pd.read_csv("model_accuracies.csv")

models = acc_df["Model"]
accuracies = acc_df["Accuracy"]


# models = list(model_accuracies.keys())
# accuracies = list(model_accuracies.values())

# -------------------------------
# Dashboard: 3 charts
# -------------------------------
fig = plt.figure(figsize=(16,10))
fig.suptitle("Parkinson's Disease Prediction Dashboard (Segment-Level)", fontsize=16, fontweight='bold')

# 1️⃣ Test set bar chart (49 segments)
ax1 = fig.add_subplot(2,2,1)
for i, stage in enumerate(stage_names.values()):
    ax1.bar(i - width/2, true_counts_test[stage], width, color=stage_colors[stage], label=f"True {stage}" if i==0 else "")
    ax1.bar(i + width/2, pred_counts_test[stage], width, color=stage_colors[stage], alpha=0.6, label=f"Pred {stage}" if i==0 else "")
ax1.set_xticks(x)
ax1.set_xticklabels(stage_names.values())
ax1.set_ylabel("Number of Segments")
ax1.set_title("Test Set Predictions (20% of dataset)")
ax1.legend()

# 2️⃣ Full dataset bar chart (250 segments)
ax2 = fig.add_subplot(2,2,2)
for i, stage in enumerate(stage_names.values()):
    ax2.bar(i - width/2, true_counts_all[stage], width, color=stage_colors[stage], label=f"True {stage}" if i==0 else "")
    ax2.bar(i + width/2, pred_counts_all[stage], width, color=stage_colors[stage], alpha=0.6, label=f"Pred {stage}" if i==0 else "")
ax2.set_xticks(x)
ax2.set_xticklabels(stage_names.values())
ax2.set_ylabel("Number of Segments")
ax2.set_title("Full Dataset Predictions")
ax2.legend()

# 3️⃣ Model accuracy comparison
ax3 = fig.add_subplot(2,2,3)
ax3.bar(models, accuracies)
ax3.bar(models, accuracies, color=['skyblue','orange','lightgreen','red'])
ax3.set_ylim(0,1)
ax3.set_ylabel("Accuracy")
ax3.set_title("Model Accuracy Comparison")
for i, v in enumerate(accuracies):
    ax3.text(i, v+0.01, f"{v:.2f}", ha='center', fontweight='bold')

plt.tight_layout(rect=[0, 0.03, 1, 0.95])
plt.show()

# -------------------------------
# Pie chart for full dataset
# -------------------------------
plt.figure(figsize=(6,6))
plt.pie(pred_counts_all_nonzero, labels=pred_counts_all_nonzero.index,
        autopct='%1.1f%%', startangle=90,
        colors=[stage_colors[stage] for stage in pred_counts_all_nonzero.index])
plt.title("Predicted Stage Distribution (Full Dataset)")
plt.show()

# -------------------------------
# Sample segment-level predictions
# -------------------------------
print("\nSample segment-level predictions (first 15 rows):")
print(feature_df[['True_Stage_Name','Predicted_Stage_Name']].head(15).to_string(index=False))
