import pandas as pd

from data_cleaning import clean_data
from feature_engineering import create_features
from stage_discovery import find_stages
from model_training import train_models


# Step 1: Load data (ONLY THIS LINE)
data = pd.read_csv("data/processed/gait_data.csv")

print("Data loaded successfully")

# Step 2: Clean data
data = clean_data(data)

# Step 3: Feature Engineering
features = create_features(data)

# Save features
features.to_csv("data/processed/features.csv", index=False)

# Step 4: Stage Discovery
features = find_stages(features)
print("\nStage Distribution:")
print(features['Stage'].value_counts())

# Step 5: Model Training
results = train_models(features)

print("\nFinal Model Comparison:")
for model, acc in results.items():
    print(model, ":", acc)