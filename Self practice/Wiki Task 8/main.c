#include <stdio.h>
#include <stdlib.h>

double power(double x, long n)
{
    double a = 1;
    while(n)
    {
        if(n % 2)
        {
            a *= x;
            n--;
        }
        else
        {
            x *= x;
            n /= 2;
        }
    }

    return a;
}

void main()
{
    double x;
    long n;
    while(scanf("%lf%ld", &x, &n) == 2)
    {
        printf("%16.16lf\n", power(x, n));
    }

    return 0;
}
