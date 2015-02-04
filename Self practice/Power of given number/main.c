#include <stdio.h>
#include <stdlib.h>

int main()
{
    int power, number, i = 1;
    long int sum = 1;
    printf("Enter your number:\n");
    scanf("%d", &number);
    printf("Enter power of your number:\n");
    scanf("%d", &power);
    while(i <= power)
    {
        sum *= number;
        ++i;
    }
    printf("%d in power %d is %d\n", number, power, sum);

    return 0;
}
