/* Chapter 3, Programming Project 5: 4x4 grid with row, column and diagonal sums */

#include <stdio.h>

int main(void)
{
    int n11, n12, n13, n14,
        n21, n22, n23, n24,
        n31, n32, n33, n34,
        n41, n42, n43, n44;

    int row1, row2, row3, row4, col1, col2, col3, col4, diag1, diag2;

    printf("Enter the numbers from 1 to 16 in any order:\n");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",
        &n11, &n12, &n13, &n14,
        &n21, &n22, &n23, &n24,
        &n31, &n32, &n33, &n34,
        &n41, &n42, &n43, &n44);

    printf("%2d %2d %2d %2d\n", n11, n12, n13, n14);
    printf("%2d %2d %2d %2d\n", n21, n22, n23, n24);
    printf("%2d %2d %2d %2d\n", n31, n32, n33, n34);
    printf("%2d %2d %2d %2d\n", n41, n42, n43, n44);
    
    row1 = n11 + n12 + n13 + n14;
    row2 = n21 + n22 + n23 + n24;
    row3 = n31 + n32 + n33 + n34;
    row4 = n41 + n42 + n43 + n44;

    col1 = n11 + n21 + n31 + n41;
    col2 = n12 + n22 + n32 + n42;
    col3 = n13 + n23 + n33 + n43;
    col4 = n14 + n24 + n34 + n44;

    diag1 = n11 + n22 + n33 + n44;
    diag2 = n41 + n32 + n23 + n14;

    printf("Row sums: %d %d %d %d\n", row1, row2, row3, row4);
    printf("Column sums: %d %d %d %d\n", col1, col2, col3, col4);
    printf("Diagonal sums: %d %d\n", diag1, diag2);

    return 0;
}