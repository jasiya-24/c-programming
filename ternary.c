/*
    Example: Ternary  / Conditional Operator
    alternative to if ... else statement
*/
#include <stdio.h>

int main() 
{
    int no1, no2, larger;

    printf("Enter values for no1 and no2: ");
    scanf("%d%d", &no1, &no2);
    
    larger = (no1 > no2) ? no1 : no2;

    printf("%d is larger", larger);
    
    return 0;
}