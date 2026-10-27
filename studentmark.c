/*
    Student Marks Details
*/
#include <stdio.h>

int main()
{
    int c_programming, mathematics, english, total;
    float average, percentage;

    printf("---------------STUDENT REPORT--------------- \n");
    printf("enter the c programming mark: \n");
    scanf("%d", &c_programming);
    printf("enter the mathematics mark: \n");
    scanf("%d", &mathematics);
    printf("enter the english mark: \n");
    scanf("%d", &english);

    total = c_programming + mathematics + english;
    printf("------------------------------------------- \n");
    printf("the total mark: %d \n", total);
    printf("------------------------------------------- \n");

    average = total / 3.0f;
    printf("the average mark: %.2f \n", average);
    printf("------------------------------------------- \n");

    percentage = (total / 300.0f) * 100;
    printf("the percentage mark: %.2f %% \n", percentage);
    printf("------------------------------------------- \n");
    return 0;
}