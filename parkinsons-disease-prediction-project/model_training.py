
from sklearn.model_selection import train_test_split
from sklearn.metrics import accuracy_score, classification_report
from sklearn.linear_model import LogisticRegression
from sklearn.tree import DecisionTreeClassifier
from sklearn.ensemble import RandomForestClassifier
from sklearn.svm import SVC
import pandas as pd
from visualization import plot_stages, plot_confusion, plot_feature_importance
from deep_model import train_cnn_lstm
import shap
import matplotlib.pyplot as plt

def explain_model(model, X_train):
    """
    Returns SHAP explainer and SHAP values for tree-based models
    """
    explainer = shap.TreeExplainer(model)
    shap_values = explainer.shap_values(X_train)
    return explainer, shap_values

def train_models(feature_df):
    # Separate features and labels
    X = feature_df.drop('Stage', axis=1)
    y = feature_df['Stage']

    print("\n========== FEATURE CHECK ==========")
    print("Features being used in model:")
    print(X.columns)

    print("\nTotal number of features:", len(X.columns))

    # Train-test split (80%-20%)
    X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)

    print("\n========== DATA SHAPE CHECK ==========")
    print("X_train shape:", X_train.shape)
    print("X_test shape:", X_test.shape)
    print("y_train shape:", y_train.shape)
    print("y_test shape:", y_test.shape)

    print("\n========== CNN-LSTM MODEL ==========")
    cnn_model, cnn_acc = train_cnn_lstm(X_train, y_train, X_test, y_test)
    print(type(cnn_model))

    results = {}
    results["CNN-LSTM"] = cnn_acc
    # Define models
    models = {
        "Logistic Regression": LogisticRegression(max_iter=1000),
        "Decision Tree": DecisionTreeClassifier(),
        "Random Forest": RandomForestClassifier(),
        "SVM": SVC()
    }

    # results = {}
    
    # Map numeric labels to stage names
    stage_names = {0: "Normal", 1: "Early", 2: "Mild", 3: "Severe"}

    for name, model in models.items():
        # Train model
        model.fit(X_train, y_train)

        # Predict on test set
        preds = model.predict(X_test)

        # Evaluate accuracy
        acc = accuracy_score(y_test, preds)
        results[name] = acc

        # Print metrics
        print(f"\n{name} Accuracy: {acc}")
        print(f"{name} Classification Report:")
        print(classification_report(y_test, preds))

        # Create a neat table of test predictions
        results_df = pd.DataFrame({
            "Row": range(1, len(y_test)+1),
            "True_Stage": [stage_names[s] for s in y_test],
            "Predicted_Stage": [stage_names[p] for p in preds]
        })

        print(f"\nPredicted Stages for all test rows ({len(preds)} rows):")
        print(results_df.to_string(index=False))  # Nicely formatted table in VS Code

        # Save test predictions to CSV
        results_df.to_csv(f"{name.replace(' ', '_')}_test_predictions.csv", index=False)

        # ------------------- Random Forest Visualizations -------------------
        if name == "Random Forest":
            # # ✅ Add training accuracy here
            # train_preds = model.predict(X_train)
            # train_acc = accuracy_score(y_train, train_preds)
            # print(f"\n{name} Training Accuracy: {train_acc}")
            # print(f"{name} Training Classification Report:")
            # print(classification_report(y_train, train_preds))

            # # 1️⃣ Save full dataset predictions in feature_df
            # feature_df["Random_Forest_Predicted"] = model.predict(X)
            # ... rest of your visualization code
      


            # 1️⃣ Save full dataset predictions in feature_df
            feature_df["Random_Forest_Predicted"] = model.predict(X)

            # 2️⃣ Segment-level bar/pie charts
            try:
                plot_segment_predictions(feature_df)  # optional, only if defined
            except:
                print("plot_segment_predictions not defined, skipping...")

            # 3️⃣ PCA scatter plot for all rows
            plot_stages(feature_df)

            # 4️⃣ Confusion matrix for test set
            plot_confusion(y_test, preds, model_name="Random Forest")

            # 5️⃣ Feature importance
            plot_feature_importance(model, X)

        

        # -------------------------------------------------------------------


    # Optional: Predict on full dataset for project showcase
    print("\nPredicting stages for full dataset (all rows)...")
    for name, model in models.items():
        preds_all = model.predict(X)
        feature_df[f"{name.replace(' ', '_')}_Predicted"] = [stage_names[p] for p in preds_all]

    feature_df.to_csv("all_features_with_predictions.csv", index=False)
    print("Saved full dataset predictions to 'all_features_with_predictions.csv'.")
    
    print("\n========== FINAL MODEL COMPARISON ==========")
    for model, acc in results.items():
        print(model, ":", acc)

    acc_df = pd.DataFrame(list(results.items()), columns=["Model","Accuracy"])
    acc_df.to_csv("model_accuracies.csv", index=False)
    
    return results