age=int(input("age :"))
vote = ("yes","no")[age<18]
print(vote)

# tax :
sal=float(input("salary : "))
tax=sal*(0.1,0.2)[sal<=50000]
print("Your Tax is",tax)