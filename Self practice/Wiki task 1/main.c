#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    double sum, j;
    printf("Type amount of number:\n");
    scanf("%d", &number);
    for(int i = 0; i < number; ++i)
    {
        scanf("%lf", &j);
        sum += j;
    }
    printf("Sum is %f\n", sum);

    return 0;
}
