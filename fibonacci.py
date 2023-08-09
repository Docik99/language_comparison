import time
import sys


def fibonacci(n):
    if n <= 1:
        return n
    return fibonacci(n - 1) + fibonacci(n - 2)


if __name__ == "__main__":
    iterations = int(sys.argv[1])
    starttime = time.time()
    print(fibonacci(iterations))
    print(int(time.time() - starttime), " sec")
