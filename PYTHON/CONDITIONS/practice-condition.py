A = int(input("A : "))
G = input("M/F : ")
if((A == 1 or A == 2) and G == "M"):
    print("Fee is 200")
elif(A == 3 or A == 4 or G == "F"):
    print("Fee is 300")
elif(A == 5 and G == "M"):
    print("Fee is 400")
else:
    print("No Fee")