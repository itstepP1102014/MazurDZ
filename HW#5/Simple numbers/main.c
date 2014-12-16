#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Type 'n' to check it. It should be more or equal '2':\n");
    scanf("%d", &n);
    do
    {
        printf("It should be MORE or EQUAL '2'");
    }
    while(n<2);
    int i=1, d=0; // d - is denominator//
    for(int i, d; d<=2, i<=n, ++i )
    {
        if(n%i==0)
        {
            ++d;
            printf("It's simple number\n");
        }
        else
        {
            printf("It's not a simple number\n");
        }
    }
    return 0;
}
