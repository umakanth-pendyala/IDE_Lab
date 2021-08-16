n = int(input("enter a number "))

def isPrime(n):
    prime = True
    for i in range(2, n // 2 + 1):
        if int(n % i) == 0:
            prime = False
    return prime

primes = []
for i in range(2, n + 1):

    if (isPrime(i)):
        primes.append(i)
print("Prime number from 2 to " + str(n) + " are: ", primes)