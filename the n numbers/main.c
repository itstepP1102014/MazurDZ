#include <stdio.h>
#include <stdlib.h>

int main()
{
    double V, r, R, h, P;
    P=3,1415926;
    printf("type 'r'\n",r);
    scanf("%lf",&r);
    printf("type 'h'\n",h);
    scanf("%lf",&h);
    R=r*r;
    V=P*R*h;
    printf("V=%lf\n",V);
    printf("V=%e\n",V);


    return 0;

}
