#include <stdio.h>

int factorial(int temp)
{
    if(temp == 0)
    {
        return 1;
    }
    else
    {
        return temp * factorial(temp - 1);
    }
}
int main()
{
    int n;
    printf("Input your number:\n");

    while(n < 0)
    {
        printf("ERROR!\n");
    }

    if(scanf("%d", &n) >= 0)
    {
        printf("%d\n", factorial(n));
    }

    return 0;
}
