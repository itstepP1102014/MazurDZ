#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int a, b, r=a/b, i;
    printf("Type 1st number:\n",a);
    scanf("%d",&a);
    printf("Type 2nd number:\n",b);
    scanf("%d",&b);
    do
    {
        if(a>0&&b>=0)
        {
           a/b=r;
           a=b;
           b=r;
           ++i

        }
        else
        {
            break;
        }
    }
    while(r!=0);

    return 0;
}
