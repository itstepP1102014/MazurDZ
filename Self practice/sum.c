#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k, i;
    double s, j;
    printf("введите количество чисел ряда:\n",k);
    scanf("%d",&k);
    printf("введите числовую последовательность:\n");
    for(i=0;i<k;++i);
    {
        scanf("%lf",&j);
        s+=j;
    }
    printf("Sum is %f\n",s);

    return 0;
}
