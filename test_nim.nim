import times

proc fibonacci(n: int): int = 
    if n <= 1:
        return n
    return fibonacci(n-1) + fibonacci(n-2)

var starttime = cpuTime()
echo(fibonacci(50))
echo int(cpuTime() - starttime), " sec"