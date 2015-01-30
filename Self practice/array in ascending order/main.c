#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, a, n, number[1000];
    printf("Enter value of 'N':\n");
    scanf("%d", &n);
    printf("Enter your numbers:\n");
    for(i = 0; i < n; ++i)
    {
        scanf("%d", &number[i]);
    }
    for(i = 0; i < n; ++i)
    {
        for(j = i + 1; j < n; ++j)
        {
            if(number[i] > number[j])
            {
                a = number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }

    printf("Your numbers are arranged in ascending order:\n");
    for(i = 0; i < n; ++i)
    {
        printf("%d\n", number[i]);
    }

    return 0;
}
