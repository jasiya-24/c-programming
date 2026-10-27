/* TITLE: EVEN NUMBERS FROM 1 TO 20*/
#include <stdio.h>

int main()
{

    printf("the even numbers are: ");
    for (int i = 1; i <= 20; i++)
    {
        if (i % 2 == 0)
        {

            printf(" %d", i);
        }
    }

    return 0;
}