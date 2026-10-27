#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a charectar: ");
    scanf("%c", &ch);

    switch (ch)
    {

    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("Vowel!");
        break;
    default:
        printf("Consonent");
    }
    return 0;
}

/*
    ****
    SIMPLE CALCULATOR MENU
    ****
    1. Add
    2. Subtract
    3. Multiplication
    4. Division
    0. Exit
    ********
    Enter your choice. 1
    Enter first number: 10
    Enter secpmnd number: 5
    Result: 15


*/