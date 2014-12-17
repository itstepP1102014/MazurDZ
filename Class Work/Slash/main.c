#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, sumOfDigit=0;
    printf("Type your number:\n");
    scanf("%d", &n);
    while(n!=0)
    {
        sumOfDigit += n%10;
        n /= 10;
    }
    printf("%d", sumOfDigit);

    return 0;
}
