
#include <stdio.h>

int main()
{
    int age, mark;
    char initial;
    float attendence;

    printf("------------ ELIGIBILITY REPORT ------------\n");
    printf("initial: ");
    scanf(" %c", &initial);
    printf("age: ");
    scanf("%d", &age);
    printf("mark: ");
    scanf("%d", &mark);
    printf("attendence percentage: ");
    scanf("%f", &attendence);

    ((age >= 18 && mark >= 40) && attendence >= 75) ? printf("status: eligible") : printf("status: not eligible");

    return 0;
}
