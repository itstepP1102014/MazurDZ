#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    do
    {
        printf("Type 'n' to check it.\n");
        printf("It should be MORE or EQUAL '2'");
        scanf("%d", &n);
    }
    while(n<2);
    int d=0; // d - is denominator//
    for(int i=2; i<=n; ++i )
    {
        if(n%i==0)
        {
            ++d;
        }
        if(d==2)
        {
            printf("It's simple number\n");
        }
        else
        {
            printf("It's not a simple number\n");
        }
    }
    return 0;
}
