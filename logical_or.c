/*
    Loan eligibili8ty program
    Age >= 40 and Salary >= 40000 or Grade = A;
*/
#include <stdio.h>

int main()
{
    int age;
    float salary;
    char grade;
    int has_criminal_record = 0;

    printf("Age: ");
    scanf("%d", &age);
    printf("Salary: ");
    scanf("%f", &salary);
    printf("Grade: ");
    scanf(" %c", &grade);
    printf("Criminal record? [0-No 1-Yes]: ");
    scanf("%d", &has_criminal_record);

    printf("Status: ");
    (!has_criminal_record && ((age >= 40 && salary >= 40000) || grade == 'A')) ? printf("Eligible for loan.") : printf("Not eligible!");
    return 0;
}