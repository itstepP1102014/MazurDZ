#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n;
    printf("Type two numbers:\n");
    scanf("%d%d", &m, &n);
    for(int i = 1; i < m; ++i)
    {
        for(int j = 1; j < n; ++j)
        {
            if(i%2 || j%2)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
