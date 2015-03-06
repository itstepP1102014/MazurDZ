#include <stdio.h>
#include <stdlib.h>

int output_number(int n)
{
    int a, b, c;
    c = n % 10;
    b = (n % 100)/10;
    a = n / 100;

    if(a != b && a != c && b != c)
        return n;
}

int main()
{
    int n;

    for(n = 103; n > 102 && n <987; ++n)
    {
        output_number(n);
    }
    printf("%d\n", n);

    return 0;
}
