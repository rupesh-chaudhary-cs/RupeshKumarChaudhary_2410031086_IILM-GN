# visualization.py
import matplotlib.pyplot as plt
from sklearn.decomposition import PCA
from sklearn.metrics import confusion_matrix

def plot_stages(feature_df):
    """PCA scatter plot for stage separation"""
    X = feature_df.drop('Stage', axis=1)
    y = feature_df['Stage']
    pca = PCA(n_components=2)
    components = pca.fit_transform(X)

    plt.figure(figsize=(8,6))
    plt.scatter(components[:,0], components[:,1], c=y, cmap='viridis')
    plt.xlabel("PCA Component 1")
    plt.ylabel("PCA Component 2")
    plt.title("Parkinson Disease Stage Clusters")
    plt.colorbar(label="Stage")
    plt.show()


def plot_confusion(y_true, y_pred, model_name="Model"):
    """Confusion matrix for predictions"""
    cm = confusion_matrix(y_true, y_pred)
    plt.figure(figsize=(6,5))
    plt.imshow(cm, cmap='Blues')
    plt.title(f"{model_name} Confusion Matrix")
    plt.xlabel("Predicted")
    plt.ylabel("Actual")
    plt.colorbar()
    plt.show()


def plot_feature_importance(rf_model, X, model_name="Random Forest"):
    """Feature importance for Random Forest"""
    importances = rf_model.feature_importances_
    features = X.columns

    plt.figure(figsize=(8,6))
    plt.barh(features, importances, color='skyblue')
    plt.title(f"{model_name} Feature Importance")
    plt.show()