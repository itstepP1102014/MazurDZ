#include <stdio.h>

int factorial(int temp)
{
    int result = 1;
    for(; temp > 0; --temp);
    {
        result *= temp;
    }

    return result;
}
int main()
{
    int n;
    while( scanf("%d", &n) == 1)
    {
        printf("%d\n", factorial(n));
    }

    return 0;
}
