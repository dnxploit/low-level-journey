## Exercise 1
What output do the following calls of `printf` produce?

(a) `printf("%6d, %4d", 86, 1040);`
```
    86, 1040
```

(b) `printf("%12.5e", 30.253);`
```
 3.02530e+01
```

(c) `printf("%.4f", 83.162);`
```
83.1620
```

(d) `printf("%-6.2g", .0000009979);`
```
1e-06 
```
Note: `%g` uses 2 *significant digits* here, switches to scientific notation because the number is very small, and removes trailing zeros.

## Exercise 2
Code: ex02.c

Output with x = 24.67:
```
[2.5e+01 ]
[2.467000e+01]
[24.670  ]
[    25]
```