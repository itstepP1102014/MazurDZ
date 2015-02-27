#include <stdio.h>

void swap(int *x, int *y)
{
    int z = *x;
    *x = *y;
    *y = z;
}

int main()
{
    int a = 5, b = 15;
    swap(&a, &b);
    printf("%d %d", &a, &b);

    return 0;
}
