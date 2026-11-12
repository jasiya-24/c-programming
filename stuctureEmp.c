/*
 * Student Name : jasiya
 * Batch        : C + C++ Batch 19
 * Program Title: structure and file handling.
 * Date         : 11-11-2026
 * Description  : Brief description of the program
 */

#include <stdio.h>
#include <string.h>

struct employee
{
    char name[30];
    int age;
    float salary;
};

int main()
{
    struct employee e1;
    strcpy(e1.name, "mahaseen");
    e1.age = 30;
    e1.salary = 12400.67;

    printf("name: %s\n", e1.name);
    printf("age: %d\n", e1.age);
    printf("salary: %.2f\n", e1.salary);

    return 0;
}