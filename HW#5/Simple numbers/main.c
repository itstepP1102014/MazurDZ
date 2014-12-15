#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Type 'n' to check it. It should be less or equal '2':\n");
    scanf("%d", &n);
    if(n<2)
    {
        printf("It should be LESS or EQUAL '2'");
    }
    else
    {
        while((n=(n%n)=1) && (n=(n/1)=n))
        {
            printf("It's simple number\n");
        }
        else
        {
            printf("It's not a simple number");
        }
    }
    return 0;
}
