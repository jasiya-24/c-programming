#include <stdio.h>
#include <stdbool.h>

int main()
{

    /*
        variable declaration syntax


        <data type> variable_name = value;
        int no = 10;
    */
    int intValue = 10;
    float floatValue = 10.4387659876573746985f;
    double doubleValue = 10.4387659876573746985;
    char charValue = 'C';
    bool booleanValue = false;
    char name[10] = "Jasiya";

    printf("Int Value: %d\n", intValue);
    printf("float Value: %.20f\n", floatValue);
    printf("double Value: %.20lf\n", doubleValue);
    printf("char Value: %c\n", charValue);
    printf("boolean Value: %d\n", booleanValue);
    printf("string Value: %s\n", name);

    printf("Enter int value: ");
    scanf("%d", &intValue);
    printf("Enter float value: ");
    scanf("%f", &floatValue);
    printf("Enter double value: ");
    scanf("%lf", &doubleValue);
    printf("Enter char value: ");
    scanf(" %c", &charValue);
    printf("Enter boolean value: ");
    scanf("%d", &booleanValue);
    printf("Enter string value: ");
    scanf("%s", name);

    printf("Int Value: %d\n", intValue);
    printf("float Value: %.20f\n", floatValue);
    printf("double Value: %.20lf\n", doubleValue);
    printf("char Value: %c\n", charValue);
    printf("boolean Value: %d\n", booleanValue);
    printf("string Value: %s\n", name);

    printf("Size of long = %u", sizeof(long));

    /*
        short
        long
        signed
        unsigned
    */

    short int shortNumber = -32000;
    unsigned short int ushortNumber = 65000;

    unsigned int age = 25;

    long int distance = 1000000L;
    unsigned long int longCount = 30000000UL;

    long long int bigNumber = 9000000000LL;
    unsigned long long int veryBigNumber = 180003000000ULL;

    long double preciseValue = 3.1415984848488L;

    printf("short Number = %hd\n", shortNumber);
    printf("unsigned short Number = %hu\n", ushortNumber);
    printf("Unsigned int Number = %u\n", age);
    printf("Long int = %ld\n", distance);
    printf("Unsigned long int: %lu\n", longCount);
    printf("Long Long Int Number = %lld\n", bigNumber);
    printf("Unsigned -long long int Number = %llu\n", veryBigNumber);
    printf("Long double Number = %.18Lf\n", preciseValue);

    return 0;
}