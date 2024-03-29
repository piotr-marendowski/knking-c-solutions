/*  Name: p8-05.c
    Purpose: Prints a table of compound interest.
    Author: Piotr Marendowski
    Date: 17.05.2022  */

#include <stdio.h>

#define NUM_RATES ((int) (sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00

int main(void)
{ 
    int i, low_rate, num_years, year, months;
    double value[5];

    printf("Enter interest rate: ");
    scanf("%d", &low_rate);
    printf("Enter number of months: ");
    scanf("%d", &months);

    /*Calculate years,
    if months is not a full year, then add 1 to years*/ 
    num_years = months / 12;
    if (months % 12) {
        num_years++;
    }

    printf("\nYears");
    for (i = 0; i < NUM_RATES; i++) {
        printf("%6d%%", low_rate + i);
        value[i] = INITIAL_BALANCE;
    }
    printf("\n");

    for (year = 1; year <= num_years; year++) {
        printf("%3d    ", year);
        for (i = 0; i < NUM_RATES; i++) {
            value[i] += (low_rate + i) / 100.0 * value[i];
            printf("%7.2f", value[i]);
        }
        printf("\n");
    }

    return 0;
}