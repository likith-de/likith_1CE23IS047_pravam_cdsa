def toggle_case(char):
    # Check if the input character is a letter
    if char.isalpha():
        # If the character is lowercase, convert to uppercase; if uppercase, convert to lowercase
        return char.swapcase()
    else:
        return "Invalid input"

# Get input from the user
input_char = input("Enter a character: ")

# Ensure only a single character is entered
if len(input_char) == 1:
    result = toggle_case(input_char)
    print(result)
else:
    print("Invalid input")