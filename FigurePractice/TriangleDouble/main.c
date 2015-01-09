#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, k;
    printf("Type amount of lines:\n");
    scanf("%d", &n);
    for(i = 0; i < n; ++i)
    {
        for(j = 0; j < n - i; ++j)
        {
            printf("*");
        }
        for(k = 0; k < (2*n-2*j); ++k)
        {
            printf(" ");
        }
        for(j = 0; j < n - i; ++j)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
