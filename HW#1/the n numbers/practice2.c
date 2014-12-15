#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, k, z=1, l=2, s=5;
    for(i=0,i<=s,++i)
    {
        k=l*z;
        z=k;
    }
    printf("%d in %d=%d\n",l,s,k);

    remove 0;
}
