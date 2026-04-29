
from sklearn.cluster import KMeans

def find_stages(feature_df, n_clusters=4):
    
    # Select ONLY important features
    # selected_features = feature_df[
    #     ['Left_Mean', 'Right_Mean', 'Left_STD', 'Right_STD', 'Symmetry', 'Total_Pressure']
    # ]
    selected_features = feature_df[
    [
    'Left_Mean',
    'Right_Mean',
    'Left_STD',
    'Right_STD',
    'Symmetry',
    'Balance',
    'Left_Range',
    'Right_Range',
    'Total_Pressure',
    'Force_Variation',
    'Walking_Speed',
    'Stride_Length',
    'Step_Variability'
    ]
    ]

    kmeans = KMeans(n_clusters=n_clusters, random_state=42)
    
    feature_df['Stage'] = kmeans.fit_predict(selected_features)

    print("Stages discovered using clustering")
    return feature_df