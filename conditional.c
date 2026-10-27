#include <stdio.h>

int main()
{
    // int age;
    // printf("Enter age: ");
    // scanf("%d", &age);

    // if (age >= 18)
    // {
    //     printf("Eligible!");
    //     printf(" for vote!");
    // }
    // else
    // {
    //     printf("Not eligible!");
    //     printf(" for vote!");
    // }

    // float averageMark;
    // printf("Enter mark ");
    // scanf("%f", &averageMark);
    // // >=90 -> A, >=70 -> B, >=40 -> C, <40 -> Fail
    // if (averageMark >= 90)
    // {
    //     printf("Grade A");
    // }
    // else if (averageMark >= 70)
    // {
    //     printf("Grade B");
    // }
    // else if (averageMark >= 40)
    // {
    //     printf("Grade C");
    // }
    // else
    // {
    //     printf("Fail");
    // }

    int age;
    int mark;

    printf("Age and Mark: ");
    scanf("%d%d", &age, &mark);

    if (age >= 18)
    {
        if (mark >= 40)
        {
            printf("Eligible!");
        }
        else
        {
            printf("Mark requirement not met!");
        }
    }
    else
    {
        printf("Age requirement not met!");
    }

    printf("\nEnd of program!");
    return 0;
}