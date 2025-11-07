import pandas as pd
import matplotlib.pyplot as plt

# Sample CSV data as a string
csv_data = """Month,Sales,Expenses,Profit
January,45000,32000,13000
February,52000,35000,17000
March,48000,33000,15000
April,61000,38000,23000
May,58000,36000,22000
June,67000,41000,26000
July,71000,43000,28000
August,69000,42000,27000
September,64000,40000,24000
October,72000,44000,28000
November,78000,46000,32000
December,85000,50000,35000"""

# Save the CSV data to a file
with open('sales_data.csv', 'w') as f:
    f.write(csv_data)

# Read the CSV file using pandas
df = pd.read_csv('sales_data.csv')

# Display the dataframe
print("Data from CSV file:")
print(df)
print("\n" + "="*50 + "\n")

# Basic statistics
print("Basic Statistics:")
print(df.describe())
print("\n" + "="*50 + "\n")

# Create a graph using matplotlib
plt.figure(figsize=(12, 6))

# Plot multiple lines
plt.plot(df['Month'], df['Sales'], marker='o', linewidth=2, label='Sales')
plt.plot(df['Month'], df['Expenses'], marker='s', linewidth=2, label='Expenses')
plt.plot(df['Month'], df['Profit'], marker='^', linewidth=2, label='Profit')

# Customize the plot
plt.title('Monthly Sales, Expenses, and Profit', fontsize=16, fontweight='bold')
plt.xlabel('Month', fontsize=12)
plt.ylabel('Amount ($)', fontsize=12)
plt.xticks(rotation=45, ha='right')
plt.legend(fontsize=10)
plt.grid(True, alpha=0.3)
plt.tight_layout()

# Show the plot
plt.show()

# Optional: Create a bar chart
plt.figure(figsize=(12, 6))
x = range(len(df['Month']))
width = 0.25

plt.bar([i - width for i in x], df['Sales'], width, label='Sales', alpha=0.8)
plt.bar(x, df['Expenses'], width, label='Expenses', alpha=0.8)
plt.bar([i + width for i in x], df['Profit'], width, label='Profit', alpha=0.8)

plt.title('Monthly Financial Overview (Bar Chart)', fontsize=16, fontweight='bold')
plt.xlabel('Month', fontsize=12)
plt.ylabel('Amount ($)', fontsize=12)
plt.xticks(x, df['Month'], rotation=45, ha='right')
plt.legend(fontsize=10)
plt.grid(True, alpha=0.3, axis='y')
plt.tight_layout()

plt.show()