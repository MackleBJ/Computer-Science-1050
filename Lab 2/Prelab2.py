# Brett M.
# Sept. 1, 2021
# CS 1050 - 01 Lab 2 except in python
# Take input from the user and perform basic math with the integers

user_numbers = input("Enter 2 integers separated by a space: ")
numbers_split = user_numbers.split()
x = int(numbers_split[0])
y = int(numbers_split[1])

print("*** Initial values ***")
print("X = {}".format(x))
print("Y = {}\n".format(y))

print("*** Calculated values ***")
print("X times Y = {}".format(x*y))
print("X divided by Y = {}".format(int(x/y))) # int() only used to copy sample output
print("X plus 1, quantity times Y = {}\n".format((x+1)*y))

print("*** Final values ***")
print("X = {}".format(x))
print("Y = {}".format(y))
