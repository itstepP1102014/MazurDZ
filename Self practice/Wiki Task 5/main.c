#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, number;
    printf("Enter your number:\n");
    scanf("%d", &number);
    for(i = 1; i <= number; ++i)
    {
        for(j = 1; j <= number; ++j)
        {
            printf("%5d", i * j);
        }
    }printf("\n");

    return 0;
}
