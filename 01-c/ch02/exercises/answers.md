## Exercise 1
Code ex01.c

Do you get a warning message from the compiler?
No warning. Since C99, reaching the end of main returns 0 implicitly.

## Exercise 2
(a) Directives:
```c
#include <stdio.h>
```
Statements:
```c
printf("Parkinson's Law:\nWork expands so as to ");
printf("fill the time\n");
printf("available for its completion.\n");
return 0;
```

(b) Output:
```
Parkinson's Law:
Work expands so as to fill the time
available for its completion.
```

## Exercise 4
Code: ex04.c

Is there any pattern to the values?
In my test all values were 0, but doind some research i found that is not a reliable pattern.
Uninitialized variables have indeterminate values: they contain whatever was in that memory before. My program is so small that the memory was still clean, so everything was 0.

## Exercise 5
Which identifiers are not legal?

- **(a) `100_bottles` -> not legal** (an identifier can't start with a digit)
- (b) `_100_bottles` -> legal
- (c) `one__hundred__bottles` -> legal
- (d) `bottles_by_the_hundred_` -> legal

## Exercise 6
Why is it not a good idea to use more than one adjacent underscore?

It makes the identifier hard to read and easy to mistype: it is difficult to see if there are one or two underscores, so you can easily write `current_balance` instead of `current__balance` and get an error.

## Exercise 7
Which of the following are keywords in C?

- **(a) `for`** -> keyword
- (b) `If` -> not a keyword (C is case-sensitive; the keyword is `if`)
- (c) `main` -> not a keyword, it is the name of a function
- (d) `printf` -> not a keyword, it is a standard library function
- **(e) `while`** -> keyword

## Exercise 8
How many tokens are there in the following statement?
```c
answer=(3*q-p*p)/3;
```

14 tokens:

`answer` `=` `(` `3` `*` `q` `-` `p` `*` `p` `)` `/` `3` `;`

Spaces are not tokens, they only separate them.

## Exercise 9
Insert spaces between the tokens in Exercise 8 to make the statement easier to read.
```c
answer = (3 * q - p * p) / 3;
```

## Exercise 10
In the `dweight.c` program, which spaces are essential?

A space is essential when it separates two tokens that would otherwise merge into one (two words or numbers next to each other):

- `int main` → `intmain` would be a new identifier
- `int height` (and the rest of that declaration line)
- `return 0` → `return0` would be an identifier

Not essential: the space in `#include <stdio.h>` (`#include<stdio.h>` also compiles).

Spaces inside string literals can't be removed either, because they are part of the printed text.