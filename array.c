// TITLE : FINDING LARGEST AND SMALLEST NUMBER.

#include <stdio.h>

int main()
{
        int no[6];
        int smaller, larger;

        // to assign the value from the user.
        for (int i = 0; i < 6; i++)
        {
                printf("enter the number for no[%d] : ", i);
                // printf("Enter number %d: ", i+1);
                scanf("%d", &no[i]);
        }
        printf("\n-------------------------------------\n");

        // to display the value.
        printf("the numbers are: ");
        for (int i = 0; i < 6; i++)
                printf("%d,", no[i]);

        // to find largest and smallest number.
        smaller = larger = no[0];

        for (int i = 0; i < 6; i++)
        {
                if (no[i] < smaller)

                        smaller = no[i];

                if (no[i] > larger)

                        larger = no[i];
        }
        printf("\n-------------------------------------");
        printf("\nthe largest number: %d", larger);
        printf("\nthe smallest number: %d", smaller);
        printf("\n-------------------------------------");

        return 0;
}