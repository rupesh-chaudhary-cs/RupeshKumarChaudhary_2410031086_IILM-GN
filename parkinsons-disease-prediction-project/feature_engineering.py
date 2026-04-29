

import pandas as pd
import numpy as np

def create_features(data, window_size=50):
    segments = []
    
    for i in range(0, len(data) - window_size, window_size):
        segment = data.iloc[i:i+window_size]

        feat = {}

        left_cols = ['L1','L2','L3','L4','L5','L6','L7','L8']
        right_cols = ['R1','R2','R3','R4','R5','R6','R7','R8']

        left_values = segment[left_cols].values
        right_values = segment[right_cols].values

        # Mean
        feat['Left_Mean'] = np.mean(left_values)
        feat['Right_Mean'] = np.mean(right_values)

        # Std (variability)
        feat['Left_STD'] = np.std(left_values)
        feat['Right_STD'] = np.std(right_values)

        # Symmetry (absolute difference is better)
        feat['Symmetry'] = abs(feat['Left_Mean'] - feat['Right_Mean'])

        # Balance ratio
        feat['Balance'] = feat['Left_Mean'] / (feat['Right_Mean'] + 1e-5)

        # Range (movement variation)
        feat['Left_Range'] = np.max(left_values) - np.min(left_values)
        feat['Right_Range'] = np.max(right_values) - np.min(right_values)

        # Total force
    
        feat['Total_Pressure'] = (segment['Left_Total'] + segment['Right_Total']).mean()

        # NEW (important for research)
        feat['Force_Variation'] = np.std(segment['Left_Total'] + segment['Right_Total'])
        
        # ========================
        # NEW GAIT FEATURES (RESEARCH LEVEL)
        # ========================

        # Total pressure signal
        total_pressure = segment['Left_Total'] + segment['Right_Total']

        # 1. Step detection (approx peaks)
        threshold = total_pressure.mean()
        steps = np.sum(total_pressure > threshold)

        # 2. Time duration
        time_duration = segment['time'].iloc[-1] - segment['time'].iloc[0]

        # 3. Walking Speed (steps per second)
        feat['Walking_Speed'] = steps / (time_duration + 1e-5)

        # 4. Stride Length (inverse of step frequency)
        feat['Stride_Length'] = (time_duration + 1e-5) / (steps + 1e-5)

        # 5. Step Variability (important clinical feature)
        feat['Step_Variability'] = np.mean(np.abs(np.diff(total_pressure)))
        segments.append(feat)

    feature_df = pd.DataFrame(segments)
    print("Feature engineering completed")

    return feature_df
