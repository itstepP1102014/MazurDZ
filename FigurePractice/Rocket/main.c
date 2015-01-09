#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Type amount of lines\n");
    scanf("%d", &n);
    for(int amount = 0; amount < n; amount++)
    {
        for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for(int k = 0; k < i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int l = 0; l < n; l++)
    {
        for(int j = 0; j < n - l; j++)
        {
            printf(" ");
        }
        for(int k = 0; k < n - l; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    }
    return 0;
}
