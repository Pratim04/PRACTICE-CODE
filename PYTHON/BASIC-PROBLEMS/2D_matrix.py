rows = 2
cols = 2
matrix = []

for i in range(rows):
    row = []
    for j in range(cols):
        val = int(input(f"Enter element [{i}][{j}]: "))
        row.append(val)
    matrix.append(row)

print("Matrix:")
for row in matrix:
    print(row)
