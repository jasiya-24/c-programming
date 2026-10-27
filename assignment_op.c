#include <stdio.h>

int main()
{
    // Compound assignment operators
    //  += *= /= %=
    // Increment / Decrement operators
    //  ++ -- (pre-fix ++i and post-fix i++)

    /*int no1, no2;

    no1 = 1;
    no2 = 1;
    no1 += 1; // no1 = no1 + 1
    no1 -= 2;
    no1 /= 2;
    printf("no1 = %d", no1);

    no2++; // no2 = no2 + 1;
    no2--; // no2 = no2 - 1;
    printf("\nNo2 = %d", no2);

*/

    int a = 1;

    int b = a--;
    printf("A = %d B = %d", a, b); // a = 1 b = 2

    return 0;
}