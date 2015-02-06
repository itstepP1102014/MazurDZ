#include <stdio.h>
#include <stdlib.h>
#include "decimalTo.h"

int main()
{
    int decimalSystem, anotherSystem;
    printf("Enter number in the decimal system:\n");
    scanf("%d", &decimalSystem);
    printf("Enter various number system:\n");
    scanf("%d", &anotherSystem);
    if(anotherSystem >= 2 && anotherSystem <= 36)
    {
        printf("%d", anotherSystem);
        decimalToAnotherSystem(decimalSystem, anotherSystem);

    }
    else
    {
        printf("ERROR!\a");
    }
    return 0;
}
