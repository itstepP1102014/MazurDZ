#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1;
    do
    {
        printf(".:iI.:iI.:iI.:iI.:iI.:iI %d%%\r", ++i);
    }while (i<100);

    return 0;
}
