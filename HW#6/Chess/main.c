#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n;
    printf("Type two numbers:\n");
    scanf("%d%d", &m, &n);
    for(int i = 1; i < m; ++i)
    {
        if (i % 2)
        {
            for (int k = 1; k <= n; ++k)
            {
                printf("%s", k % 2? "*" : " ");
            }
        }
        else
        {
            for (int k = 1; k <= n; ++k)
            {
                printf("%s", k % 2? " " : "*");
            }
        }
        printf("\n");
    }

    return 0;
}
