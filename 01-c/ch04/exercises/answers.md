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

## Exercise 8
Would `upc.c` still work with `(10 - (total % 10)) % 10`?

Yes. `10 - (total % 10)` gives a value from 1 to 10. The extra `% 10` leaves 1-9 unchanged and turns 10 into 0, which fixes the problem from Exercise 7. For example, with total = 30: `(10 - 0) % 10 = 0`, the same as the original algorithm.

## Exercise 9
Show the output of each program fragment.

(a) `i = 7; j = 8; i *= j + 1; printf("%d %d", i, j);`
```
63 8
```

(b) `i = j = k = 1; i += j += k; printf("%d %d %d", i, j, k);`
```
3 2 1
```

(c) `i = 1; j = 2; k = 3; i -= j -= k; printf("%d %d %d", i, j, k);`
```
2 -1 3
```

(d) `i = 2; j = 1; k = 0; i *= j *= k; printf("%d %d %d", i, j, k);`
```
0 0 0
```

## Exercise 10
Show the output of each program fragment.

(a) `i = 6; j = i += i; printf("%d %d", i, j);`
```
12 12
```

(b) `i = 5; j = (i -= 2) + 1; printf("%d %d", i, j);`
```
3 4
```

(c) `i = 7; j = 6 + (i = 2.5); printf("%d %d", i, j);`
```
2 8
```

(d) `i = 2; j = 8; j = (i = 6) + (j = 3); printf("%d %d", i, j);`
```
6 9
```
Note: this is undefined behavior, because `j` is modified twice in the same expression. Most compilers print `6 9`, but C doesn't guarantee it (gcc -Wall warns about it).