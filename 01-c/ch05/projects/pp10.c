/* Chapter 5, Programming Project 10: numerical grade to letter grade using switch */

#include <stdio.h>

int main(void)
{
    int grade;

    printf("Enter the numerical grade: ");
    scanf("%d", &grade);

    if (grade < 0 || grade > 100) {
        printf("Illegal grade\n");
        return 1;
    }

    switch (grade / 10) {
        case 10: case 9:
            printf("Letter grade: A\n");
            break;
        case 8:
            printf("Letter grade: B\n");
            break;
        case 7:
            printf("Letter grade: C\n");
            break;
        case 6:
            printf("Letter grade: D\n");
            break;
        default:
            printf("Letter grade: F\n");
            break;
    }

    return 0;
}