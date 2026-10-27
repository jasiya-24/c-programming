#include <stdio.h>

int main()
{
    int no1 = 5;
    int no2 = 10;
    int mul;
    
    printf("enter the two numbers: ");
    scanf("%d %d",&no1,&no2);

    mul= no1 * no2;

    printf("the multiplication of two value is %d", mul);
    return 0;
}