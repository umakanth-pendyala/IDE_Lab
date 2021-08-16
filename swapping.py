print("enter 2 numbers for swapping")
num1 = int(input("Enter number 1: "))
num2 = int(input("Enter number 2: "))

print("elements before swapping: " + str(num1) + " " + str(num2))
num1, num2 = num2, num1
print("elements after swapping: " + str(num1) + " " + str(num2))
