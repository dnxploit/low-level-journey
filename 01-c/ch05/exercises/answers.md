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

## Exercise 5
Is `if (n >= 1 <= 10)` legal? If so, what does it do when `n` is 0?

- Legal? Yes, it compiles, but it doesn't do what it seems to do.
- How it's evaluated: first `n >= 1` is evaluated, which gives 0 or 1. Then that result is compared with 10. Since 0 and 1 are both less than or equal to 10, the condition is always true.
- When n = 0: `0 >= 1` is 0, and `0 <= 10` is 1, so the message "n is between 1 and 10" is printed even though 0 is not between 1 and 10.

## Exercise 6
Is `if (n == 1-10)` legal? If so, what does it do when `n` is 5?

- Legal? Yes
- How it's evaluated: first `1-10` is evaluated, which gives -9, then compares if n is equal to -9.
- When n = 5: 5 is not equal to -9, so the condition is false (0) and nothing is printed.

## Exercise 7
What does `printf("%d\n", i >= 0 ? i : -i);` print?

- When i = 17: 17
- When i = -17: 17
- What the expression does: first `i >= 0` is evaluated. If it's true, the value of the expression is `i`; if it's false, it's `-i`. With i = -17, `-i` is -(-17) = 17. So the expression always prints the absolute value of `i`.

## Exercise 8
Simplify the `if` statement as much as possible.

```c
teenager = age >= 13 && age <= 19;
```

Why it works: the condition is already true (1) or false (0), so it can be assigned directly to `teenager`. Also, the original `else if (age < 13)` is redundant: if `age >= 13` is false, `age` must be less than 13.

## Exercise 9
Are the two `if` statements equivalent? If not, why not?

- Equivalent? Yes.
- Why: both give the same letter for every score. The first one checks from the highest grade down (`>= 90`, `>= 80`...) and the second one from the lowest up (`< 60`, `< 70`...). The boundaries match: for example, a score of 60 is a D in both, because `60 >= 60` is true and `60 < 60` is false.

## Exercise 10
What output does the `switch` fragment produce (i = 1)?

```
onetwo
```
Why: `i % 3` is 1, so execution starts at `case 1`. There is no `break`, so it falls through and also executes `case 2`.

## Exercise 11
Code: ex11.c