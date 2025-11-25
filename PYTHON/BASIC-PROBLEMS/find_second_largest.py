a = [int(x) for x in input("Enter numbers: ").split()]
a = list(set(a))        # remove duplicates
a.sort()
if len(a) >= 2:
    print("Second largest:", a[-2])
else:
    print("Not enough elements")
