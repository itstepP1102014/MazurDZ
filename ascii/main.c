#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    while(i<=64)
    {
        printf("%d %.4c %.4x\n",i,i,i);
        ++i;
    }

    return 0;
}
