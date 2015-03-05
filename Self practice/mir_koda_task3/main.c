#include <stdio.h>
#include <stdlib.h>

int result_of_summ(int a, int b)
{
    while(b != 0)
    {
        a += b % 10;
        b /= 10;
    }

    return a;

}

int main()
{
    int x;
    for(int i = 0; i < 100; ++i)
    {
        x = result_of_summ(0, i);
    }
    printf("%d\n", x);

    return 0;
}
