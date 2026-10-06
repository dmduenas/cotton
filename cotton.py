def is_even(x):
    if x % 2 == 0:
        return True
    else:
        return False

user = int(input("Select a number: "))
print(is_even(user))