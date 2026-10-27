#include <stdio.h>
int main()
{
    int number;

    printf("enter the number:");
    scanf("%d", &number);

    if (number % 2 == 0 && number > 10)
    {
        printf("valid number");
    }
    else
    {
        printf("invalid number");
    }
    return 0;
}