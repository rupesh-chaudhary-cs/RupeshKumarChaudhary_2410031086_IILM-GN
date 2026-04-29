import pandas as pd


def clean_data(data):
    # Remove missing values
    data = data.dropna()

    # Remove duplicate rows
    data = data.drop_duplicates()

    # Reset index
    data = data.reset_index(drop=True)

    return data