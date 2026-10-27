#include <stdio.h>

int main()
{
    int no1 = 10;
    int no2 = 20;
    // = Vs ==
    printf("no1 == no2 : %s\n", (no1 == no2) ? "true" : "false");
    printf("no1 > no2 : %d\n", no1 > no2);
    printf("no1 < no2 : %d\n", no1 < no2);
    printf("no1 >= no2 : %d\n", no1 >= no2);
    printf("no1 <= no2 : %d\n", no1 <= no2);
    printf("no1 != no2 : %d\n", no1 != no2);

    return 0;
}