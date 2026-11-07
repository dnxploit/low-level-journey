## Exercise 1
Show the output produced by each program fragment.

(a) `i = 5; j = 3; printf("%d %d", i / j, i % j);`
- Output:
```
1 2
```

(b) `i = 2; j = 3; printf("%d", (i + 10) % j);`
- Output:
```
0
```

(c) `i = 7; j = 8; k = 9; printf("%d", (i + 10) % k / j);`
- Output:
```
1
```

(d) `i = 1; j = 2; k = 3; printf("%d", (i + 5) % (j + 2) / k);`
- Output:
```
0
```

## Exercise 2
Does `(-i) / j` always have the same value as `-(i / j)`?

- **C89:** not always. When an operand is negative, the compiler can round the result either toward zero or down, so the result depends on the implementation. Example with i = 7, j = 2: `-(i / j)` is -3, but `(-i) / j` could be -3 or -4.
- **C99 and later:** yes. Division always truncates toward zero, so
  both expressions give -3.

## Exercise 3
Value of each expression in C89 (all possible values):

- (a) `8 / 5` → 1
- (b) `-8 / 5` → -2 or -1
- (c) `8 / -5` → -2 or -1
- (d) `-8 / -5` → 1 or 2

## Exercise 4
Same expressions in C99:

- (a) `8 / 5` → 1
- (b) `-8 / 5` → -1
- (c) `8 / -5` → -1
- (d) `-8 / -5` → 1

## Exercise 5
Value of each expression in C89 (all possible values):

- (a) `8 % 5` → 3
- (b) `-8 % 5` → -3 or 2
- (c) `8 % -5` → 3 or -2
- (d) `-8 % -5` → -3 or 2

## Exercise 6
Same expressions in C99:

- (a) `8 % 5` → 3
- (b) `-8 % 5` → -3
- (c) `8 % -5` → 3
- (d) `-8 % -5` → -3

In C99 the remainder always has the same sign as the left operand, because `a % b == a - (a / b) * b` and division truncates toward zero.

## Exercise 7
Why doesn't the simplified algorithm work?

Both methods give the same result except when the total is a multiple of 10. For example, with total = 30:

- Original: 9 - ((30 - 1) % 10) = 9 - 9 = 0
- Simplified: 10 - (30 % 10) = 10 - 0 = 10

10 is not a valid check digit (it must be a single digit, 0-9), so the simplified version fails in that case.