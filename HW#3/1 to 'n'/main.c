#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i=0;
    printf("Your 'n' is:\n");
    scanf("%d",&n);
    while (i<n)
    {
        printf("%d ",++i);
    }

    return 0;
}
