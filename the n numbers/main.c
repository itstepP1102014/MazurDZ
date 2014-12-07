#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, n1;
    printf("Please, enter the positive number equal to quantity of numbers\n");
    while (1)
    {
        scanf("%d",&n);
        if(n<=0)
        {
            printf("One more try, morran\n");
            continue;
        }
        if(n>0)
        {
            break;
        }
    }
    scanf("%d",&n);
    printf("Please, enter the quantity of numbers equal early to the entered number\n");
    scanf("%d",&n1);

    return 0;
}
