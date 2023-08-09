# Performance comparison of C, Python and Nim

#### The performance comparison was made on the basis of a recursive function for calculating Fibonacci numbers


![scheme](https://github.com/Docik99/language_comparison/assets/32065929/6f7ebc41-048a-47dd-9c96-64ddb08360c3)


### Python3
```
$ python fibonacci.py 42
267914296
81  sec
```

### C
```
$ gcc -o fib fibonacci.c
$ ./fib 42
267914296
1sec
```

### Nim
```
$ nim c -d:release fibonacci.nim
$ ./fibonacci 42
267914296
1 sec
```
