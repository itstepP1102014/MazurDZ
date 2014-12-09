#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, r, n;//r - result, X - helpful number, n - user's number, d - user's degree//
    unsigned X=1, d;
    printf("Type your number:\n",n);
    scanf("%d",&n);
    printf("Type number's degree:\n",d);
    scanf("%u",&d);
    for(i=0;i<=d||i==d;++i)// It seems i stuck in here(
    {
        //printf("%d",r);
        r=n*X;
        X=r;
    }
    printf("%d in degree %u is %u\n",n,d,X);

    return 0;
}
