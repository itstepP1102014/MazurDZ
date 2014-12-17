#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, s; // s - is step //
    s=1;
    printf("How many stages your tree will contain?\n");
    scanf("%d", &n);
    do
    {
         for(int i=1; i<=n; ++i)
        {
            if(i==1 || i==n || s==n)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
    }
    while(s != n);

    return 0;
}
