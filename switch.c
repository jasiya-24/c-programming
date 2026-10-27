#include <stdio.h>

int main()
{
    int day;

    printf("Enter day number [1-7]: ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("monday");
        break;
    case 2:
        printf("tueday");
        break;
    case 3:
        printf("wednesday");

    case 4:
        printf("thursday");

    case 5:
        printf("friday");
        break;
    case 6:
        printf("saturday");
        break;
    case 7:
        printf("sunday");
        break;
    default:
        printf("invalid input");
    }
    return 0;
}