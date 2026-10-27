#include <stdio.h>

int main()
{
    int theoryMark, practicalMark;

    printf("Enter Theory and Practical makrs: ");
    scanf("%d%d", &theoryMark, &practicalMark);

    (theoryMark >= 40 && practicalMark >= 40) ? printf("Pass") : printf("Fail!");

    return (4 * 0);
}