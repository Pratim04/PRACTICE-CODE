n = int(input("How many students? "))
students = {}

for i in range(n):
    name = input("Enter name: ")
    marks = int(input("Enter marks: "))
    students[name] = marks

for name, marks in students.items():
    print(name, "->", marks)
