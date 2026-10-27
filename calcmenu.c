/*
    Simple Calculator
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opp, total, no1, no2;
    printf("**********************\nSIMPLE CALCULATOR MENU\n**********************\n1. Add\n2. Subtract\n3. Multiplication\n4. Division\n0. Exit\n********\n");
    printf("enter the number: ");
    scanf("%d", &opp);
    printf("enter the first number: ");
    scanf("%d", &no1);
    printf("enter the second number: ");
    scanf("%d", &no2);

    switch (opp)
    {
    case 1:
        total = no1 + no2;
        break;
    case 2:
        total = no1 - no2;
        break;
    case 3:
        total = no1 * no2;
        break;
    case 4:
        total = no1 / no2;
        break;
    case 0:
        printf("exit ");
        exit(0);
        break;

    default:
        printf("Invalid Choice!");
        break;
    }
    printf("Result = %d", total);

    return 0;
}