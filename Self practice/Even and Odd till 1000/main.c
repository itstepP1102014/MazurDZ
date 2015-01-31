#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    for(x = 0; x <= 1000; x++)
    {
        if(x & 1)
        {
            printf("%d - odd\n", x);
        }
        else
        {
            printf("%d - even\n", x);
        }
    }

    return 0;
}
