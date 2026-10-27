/*
 * Student Name : jasiya
 * Batch        : C + C++ Batch 19
 * Program Title: DIGITAL ANALYSIS.
 * Date         : 27-10-2008
 * Description  :
 */

#include <stdio.h>

int num;
int sum = 0;
int digit;
int count = 0;
int main(void)
{
    printf("enter an integer: ");
    scanf("%d", &num);

    while (num > 0)
    {

        digit = num % 10;
        sum = sum + digit;
        count++;
        num = num / 10;
    }

    printf("sum of digit is: %d\n", sum);
    printf("number of digit is: %d\n", count);

    return 0;
}
