/* Chapter 3, Programming Project 3: breaking down ISBNs */

/* Limitation: groups are read as integers, so leading zeros are lost (e.g. publisher code "08" is printed as "8"). */

#include <stdio.h>

int main(void)
{
    int prefix, group_id, publisher_code, item_number, check_digit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &prefix, &group_id, &publisher_code, 
        &item_number, &check_digit);

    printf("GS1 prefix: %d\n", prefix);
    printf("Group identifier: %d\n", group_id);
    printf("Publisher code: %d\n", publisher_code);
    printf("Item number: %d\n", item_number);
    printf("Check digit: %d\n", check_digit);

    return 0;
}