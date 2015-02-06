#include <stdio.h>
#include <stdlib.h>

void decimalToAnotherSystem(int decimal, int various)
{
    int decimalTo, i = 1;
    while(i <= decimal)
    {
        i *= various;
    }
    i /= various;
    while(i != 0)
    {
        decimalTo = decimal / i;
        decimalTo <= 9? printf("%d", decimalTo) : printf("%c", 55 + decimalTo);
        decimal %= i;
        i /= various;
    }
}
