/* Chapter 5, Programming Project 11: two-digit number to English words */

#include <stdio.h>

int main(void)
{
    int num, tens, units;

    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    if (num < 9 || num > 100) {
        printf("Invalid number.\n");
        return 1;
    }

    tens = num / 10;
    units = num % 10;

    printf("You entered the number ");
    
    if (num >= 10 && num <= 19) {
        switch (num) {
            case 10:
                printf("ten.\n");
                break;
            case 11:
                printf("eleven.\n");
                break;
            case 12:
                printf("twelve.\n");
                break;
            case 13:
                printf("thirteen.\n");
                break;
            case 14:
                printf("fourteen.\n");
                break;
            case 15:
                printf("fifteen.\n");
                break;
            case 16:
                printf("sixteen.\n");
                break;
            case 17:
                printf("seventeen.\n");
                break;
            case 18:
                printf("eighteen.\n");
                break;
            case 19:
                printf("nineteen.\n");
                break;
        }
    } else {
        switch (tens) {
            case 2:
                printf("twenty");
                break;
            case 3:
                printf("thirty");
                break;
            case 4:
                printf("forty");
                break;
            case 5:
                printf("fifty");
                break;
            case 6:
                printf("sixty");
                break;
            case 7:
                printf("seventy");
                break;
            case 8:
                printf("eighty");
                break;
            case 9:
                printf("ninety");
                break;
        }

        switch (units) {
            case 1:
                printf("-one");
                break;
            case 2:
                printf("-two");
                break;
            case 3:
                printf("-three");
                break;
            case 4:
                printf("-four");
                break;
            case 5:
                printf("-five");
                break;
            case 6:
                printf("-six");
                break;
            case 7:
                printf("-seven");
                break;
            case 8:
                printf("-eight");
                break;
            case 9:
                printf("-nine");
                break;
        }
        printf(".\n");
    }
    
    return 0;
}