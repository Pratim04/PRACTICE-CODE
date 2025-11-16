import pandas as pd
import matplotlib.pyplot as plt

dataCSV = pd.read_csv('sales_data.csv')

print(dataCSV)

x = dataCSV['Month']
y = dataCSV['Sales']

plt.xlabel("Month")
plt.ylabel("Sales")

plt.title("Sales Graph")

plt.plot(x,y,color = 'red')
plt.scatter(x,y,color = 'red')

plt.show()