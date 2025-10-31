def rev_str(input_str):
    reversed_str = input_str[::-1]
    return reversed_str

str_inp = input("Enter a value: ")

print("Reversed string is:",rev_str(str_inp))