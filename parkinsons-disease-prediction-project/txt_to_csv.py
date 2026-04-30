import pandas as pd

# path to raw txt file
txt_path = "data/raw/GaCo01_01.txt"

# read txt file (tab separated, no header)
df = pd.read_csv(txt_path, sep="\t", header=None)

# give column names
columns = (
    ["time"] +
    [f"L{i}" for i in range(1, 9)] +
    [f"R{i}" for i in range(1, 9)] +
    ["Left_Total", "Right_Total"]
)

df.columns = columns

# save as csv
csv_path = "data/processed/gait_data.csv"
df.to_csv(csv_path, index=False)

print("TXT converted to CSV successfully!")
print(df.head())
