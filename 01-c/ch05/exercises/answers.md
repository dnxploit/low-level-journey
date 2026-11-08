## Exercise 1
Show the output of each program fragment.

(a) `i = 2; j = 3; k = i * j == 6; printf("%d", k);`
```
1
```

(b) `i = 5; j = 10; k = 1; printf("%d", k > i < j);`
```
1
```

(c) `i = 3; j = 2; k = 1; printf("%d", i < j == j < k);`
```
1
```

(d) `i = 3; j = 4; k = 5; printf("%d", i % j + i < k);`
```
0
```

## Exercise 2
Show the output of each program fragment.

(a) `i = 10; j = 5; printf("%d", !i < j);`
```
1
```

(b) `i = 2; j = 1; printf("%d", !!i + !j);`
```
1
```

(c) `i = 5; j = 0; k = -5; printf("%d", i && j || k);`
```
1
```

(d) `i = 1; j = 2; k = 3; printf("%d", i < j || k);`
```
1
```

## Exercise 3
Show the output of each program fragment (short-circuit evaluation).

(a) `i = 3; j = 4; k = 5;`
`printf("%d ", i < j || ++j < k); printf("%d %d %d", i, j, k);`
```
1 3 4 5
```

(b) `i = 7; j = 8; k = 9;`
`printf("%d ", i - 7 && j++ < k); printf("%d %d %d", i, j, k);`
```
0 7 8 9
```

(c) `i = 7; j = 8; k = 9;`
`printf("%d ", (i = j) || (j = k)); printf("%d %d %d", i, j, k);`
```
1 8 8 9
```

(d) `i = 1; j = 1; k = 1;`
`printf("%d ", ++i || ++j && ++k); printf("%d %d %d", i, j, k);`
```
1 2 1 1
```

## Exercise 4
Write a single expression whose value is -1, 0 or +1 depending on
whether `i` is less than, equal to, or greater than `j`.

```c
(i > j) - (i < j)
```

Why it works: each comparison is 1 if true and 0 if false.
- If `i` is less than `j`: 0 - 1 = -1
- If `i` is equal to `j`: 0 - 0 = 0
- If `i` is greater than `j`: 1 - 0 = 1