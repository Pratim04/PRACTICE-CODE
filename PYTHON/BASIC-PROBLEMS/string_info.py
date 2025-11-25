s = input("Enter a string: ")

length = len(s)
rev = s[::-1]

vowels = "aeiouAEIOU"
vcount = 0
for ch in s:
    if ch in vowels:
        vcount += 1

words = s.split()
wcount = len(words)

print("Length:", length)
print("Reversed:", rev)
print("Vowels:", vcount)
print("Words:", wcount)
