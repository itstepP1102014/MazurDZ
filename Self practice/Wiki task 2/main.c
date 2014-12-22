#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    double sum, j;
    printf(" Type string of numbers:\n");
    for(j = 1.0, sum = 0.0, number = 0; j != 0);
    {
        scanf("%lf", &j);
        if(j <= 0.0)
        {
            continue;
        }
        number++;
        sum += j;
    }
    printf("Sum is %f\nNumber is %d", sum, number);

    return 0;
}
