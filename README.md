# Performance comparison of C, Python and Nim

#### The performance comparison was made on the basis of a recursive function for calculating Fibonacci numbers


![scheme](https://github.com/Docik99/language_comparison/assets/32065929/46b151fb-3988-4279-a301-17ee0777b1ac)

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
