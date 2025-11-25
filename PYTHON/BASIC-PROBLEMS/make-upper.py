s = "hello world"
result = ""

for ch in s:
    if 'a' <= ch <= 'z':      # check if lowercase
        result = result + chr(ord(ch) - 32)
    else:
        result += ch          # keep other characters same

print(result)
