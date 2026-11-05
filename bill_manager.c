/*
 * Student Name : jasiya j
 * Batch        : C + C++ Batch 19
 * Program Title:  shopping bill manager
 * Date         : 05-11-2026
 * Description  :
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int purchaseCount;
    printf("\n----------------------------------\n");
    printf("enter the number of products: \n");
    scanf("%d", &purchaseCount);
    printf("\n----------------------------------\n");

    int *productPrice = malloc(purchaseCount * sizeof(int));
    if (productPrice == NULL)
    {
        printf("memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < purchaseCount; i++)
    {
        printf("enter the price of the product %d : \n", i + 1);
        scanf("%d", &productPrice[i]);
    }

    printf("\n----------------------------------\n");

    for (int i = 0; i < purchaseCount; i++)
    {
        printf(" the price of product %d: %drs\n", i + 1, productPrice[i]);
    }
    printf("\n----------------------------------\n");
    int total = 0;

    for (int i = 0; i < purchaseCount; i++)
    {
        total = total + productPrice[i];
    }
    printf("total bill: %drs", total);
    printf("\n----------------------------------\n");
    printf("thank you for visiting!");
    printf("\n----------------------------------\n");

    return 0;
}