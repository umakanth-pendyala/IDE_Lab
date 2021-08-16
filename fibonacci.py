def genFib(n):
    fib = []
    if n == 0:
        return []
    elif n == 1:
        fib.append(0)
        return fib
    elif n == 2:
        fib.append(0)
        fib.append(1)
        return fib
    else:
        fib.append(0)
        fib.append(1)
        while n - 2 > 0:
            fib.append(fib[-1] + fib[-2])
            n -= 1
        return fib

n = int(input("Enter a number "))
print("The Fibonacci sequence is: ", genFib(n))