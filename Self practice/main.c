#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, k, z=1, l, s;
    printf("type l:\n",l);
    scanf("%d",&l);
    printf("Type s:\n",s);
    scanf("%d",&s);
    for(i=0;i<s;++i)
    {
        k=l*z;
        z=k;
    }
    printf("%d in %d=%d",l,s,k);

    return 0;

}
