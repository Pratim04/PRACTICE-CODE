def rev_str(input_str):
    reversed_str = ""
    for char in input_str:
        reversed_str = char + reversed_str
    return reversed_str

str_inp = input("Enter a value: ")

print("Reversed string is:",rev_str(str_inp))