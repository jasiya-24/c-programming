
#include <stdio.h>

int main()
{
    int mark;
    float attendence_percentage;

    printf("enter the mark: ");
    scanf("%d", &mark);
    printf("enter the attendence percentage: ");
    scanf("%f", &attendence_percentage);

    if (mark >= 35 && attendence_percentage >= 75.00)
    {
        printf("eligible");
    }
    else
    {
        printf("not eligible");
    }

    return 0;
}