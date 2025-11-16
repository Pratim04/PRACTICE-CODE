text = input("Enter a name : ")
result = " ".join(word.capitalize() for word in text.split())
print(result)