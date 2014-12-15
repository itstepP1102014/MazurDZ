#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n, a1 = 1, a2 = 0, a3, i = 1;
    printf("Enter amount of numbers:\n",n);
    scanf("%d",&n);
    for(i;i<=n;i++)
    {
        a3=a2+a1;
        printf("%u ",a3);
        //
        a1 = a2;
        a2 = a3;
    }

    return 0;
}
