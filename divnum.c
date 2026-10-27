/*TITLE : THE NUMBER DIVISIBLE BY THREE`*/

#include <stdio.h>

int main()
{
    printf("the number divisible by 3 is\n");
    for (int i = 1; i <= 30; i++)
    {
        if (i % 3 == 0)
        {
            printf("%d  ", i);
        }
    }

    return 0;
}