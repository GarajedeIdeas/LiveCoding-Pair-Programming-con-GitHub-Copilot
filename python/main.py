# function that prints a text
def print_text(text=""):
    print(text)

print_text("Hello World")

# function to print a triangle with characters
def print_triangle(char="*", size=5):
    for i in range(size):
        print(char * (i + 1))
