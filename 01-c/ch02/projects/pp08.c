/* Chapter 2, Programming Project 8: loan balance after three monthly payments */

#include <stdio.h>

int main(void)
{
    float loan, rate, payment, monthly_rate, balance;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    monthly_rate = rate / 100.0f / 12.0f;

    balance = loan;

    balance = balance - payment + balance * monthly_rate;
    printf("Balance remaining after first payment: $%.2f\n", balance);

    balance = balance - payment + balance * monthly_rate;
    printf("Balance remaining after second payment: $%.2f\n", balance);

    balance = balance - payment + balance * monthly_rate;
    printf("Balance remaining after third payment: $%.2f\n", balance);

    return 0;
}