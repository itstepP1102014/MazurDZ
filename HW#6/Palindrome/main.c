#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, reverse = 0, temp;
    printf("Enter number to check if it is a palindrome:\n");
    scanf("%d", &n);
    temp = n;
    while(temp != 0)
    {
        reverse *= 10;
        reverse += temp%10;
        temp /= 10;
    }
    if(n == reverse)
    {
        printf("%d is a palindrome\n", n);
    }
    else
    {
        printf("%d is not a palindrome\n", n);
    }

    return 0;
}
