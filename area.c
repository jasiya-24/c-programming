#include <stdio.h>

int main()
{
    int length, breathe, area, perimeter;

    printf("enter the length: ");
    scanf("%d", &length);
    printf("enter the breathe: ");
    scanf("%d", &breathe);

    perimeter = 2 * (length + breathe);
    area = length * breathe;
    printf("the length: %d\n", length);
    printf("the breathe: %d\n", breathe);

    (length == breathe) ? printf("the shape is square") : printf("the shape is rectangle");

    return 0;
}
