def reverse_string(s):
    # Base case: if the string is empty or has one character, return it
    if len(s) <= 1:
        return s
    # Recursive case: reverse the rest of the string and append the first character
    return reverse_string(s[1:]) + s[0]

# Example usage
text = "hello"
reversed_text = reverse_string(text)
print(reversed_text)  # Output: "olleh"
