text = input("Enter text: ")
words = text.split()

freq = {}

for w in words:
    freq[w] = freq.get(w, 0) + 1

for word, count in freq.items():
    print(word, ":", count)
