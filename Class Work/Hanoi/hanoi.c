#include <stdio.h>

void diskTransfer(int amountOfDisk, char from, char to, char helper)
{
    if(amountOfDisk > 0)
    {
        diskTransfer(amountOfDisk - 1, from, helper, to);
        printf("%c -> %c\n", from, to);
        diskTransfer(amountOfDisk - 1, helper, to, from);
    }
}
