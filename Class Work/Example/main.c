#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double eps=1e-4;
    double x, result=0.0, adding=1.0;
    printf("Type 'x':\n");
    scanf("%lf", &x);
    //
    int i=1;
    while(fabs(adding)>=eps)
    {
        result += adding;
        adding*= x/i; // x/(double)i - приведение типа *//
        ++i;
    }
    printf("my exponent =%f, exp=%f, difference=%f\n", result, exp(x), result - exp(x));


    return 0;
}
