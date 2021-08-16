def calLength(input):
    index = 0
    for element in input:
        index += 1
    return index

data = input("enter a string:\t")

print("length of string using method 1: " + str(len(data)))
print("length of string using method 2: " + str(calLength(data)))
