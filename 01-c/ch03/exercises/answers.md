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

## Exercise 3
Are the two `scanf` format strings equivalent?

(a) `"%d"` vs `" %d"`
- Equivalent? Yes
- Why: `%d` already skips leading white-space, so a space before it changes nothing.

(b) `"%d-%d-%d"` vs `"%d -%d -%d"`
- Equivalent? No
- Why: in `"%d-%d-%d"` each `-` must come right after the number. In `"%d -%d -%d"` the space allows white-space before each `-`.
- Input that shows the difference: `1 -2 -3`. The second format reads 1, 2 and 3; the first one stops after 1, because it finds a space where it expected `-`.

(c) `"%f"` vs `"%f "`
- Equivalent? No
- Why: a space in the format skips **all** white-space, including Enter. At the end of the format, `scanf` keeps waiting after the number until the user types a non-white-space character.
- Input that shows the difference: type `3.5` and press Enter. With `"%f"` scanf returns; with `"%f "` it keeps waiting.

(d) `"%f,%f"` vs `"%f, %f"`
- Equivalent? Yes
- Why: `%f` already skips leading white-space, so the space after the comma changes nothing. In both, the comma must come right after the first number.