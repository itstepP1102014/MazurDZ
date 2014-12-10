#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, d, q;//n - number, d - degree, q - degree's pointer//
    double x;
    printf("Type your number:\n",n);
    scanf("%d",&n);
    printf("Type number's degree:\n",d);
    scanf("%lf",&d);
    if(d>=0)
    {
        x=n;
        q=d;

        printf("%d in degree %lf is %lf\n",n,d,x);
    }
    else
    {
        x=1.0/n;
        q=-d;
        printf("%d in degree %lf is %lf\n",n,d,x);
    }



    return 0;
}
