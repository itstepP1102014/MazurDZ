#include <stdio.h>
#include <stdlib.h>

int scan_of_number(int n)
{
    if(n < 0)
    {
        return 0;
    }
    else
    {
        return n;
    }
}

int main()
{
    int x = -10;
    printf("%d", scan_of_number(x));
    return 0;
}
