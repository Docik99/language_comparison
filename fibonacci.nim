from times import cpuTime
from os import paramStr
from strutils import parseInt

proc fibonacci(n: int): int = 
    if n <= 1:
        return n
    return fibonacci(n-1) + fibonacci(n-2)

var iterations = parseInt(paramStr(1))
var starttime = cpuTime()
echo(fibonacci(iterations))
echo int(cpuTime() - starttime), " sec"