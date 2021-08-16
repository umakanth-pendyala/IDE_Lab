n = int(input("enter a number "))

def isPrime(n):
    prime = True
    for i in range(2, n // 2 + 1):
        if int(n % i) == 0:
            prime = False
    return prime

result = isPrime(n)
if result == True:
    print("The given number " + str(n) + " is prime")
else:
    print("The given number " + str(n) + " is not prime")