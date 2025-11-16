def selectionSort(array, size):
    for ind in range(size):
        min_index = ind
        for j in range(ind + 1, size):
            if array[j] < array[min_index]:
                min_index = j
        array[ind], array[min_index] = array[min_index], array[ind]

arr = []
for i in range(10):
    num = int(input(f"Enter element {i+1}: "))
    arr.append(num)

size = len(arr)
selectionSort(arr, size)
print("Sorted array:", arr)