s = input("Enter string: ")
count = 0

for ch in s.lower():
    if ch in "aeiou":
        count += 1

print("Numer of vowels:", count)