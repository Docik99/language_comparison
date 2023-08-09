import time

def fibonacci(n):
    if n <= 1:
        return n
    return fibonacci(n-1) + fibonacci(n-2)

starttime = time.time()
print(fibonacci(45))
print(int(time.time() - starttime), " sec")