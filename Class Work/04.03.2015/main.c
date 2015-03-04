#include <stdio.h>
#include <stdlib.h>
#define N 100

int compare(const void *a, const void *b) //быстрая сортировка
    {
        double x = *((const double*)a);
        double y = *((const double*)b);

        return x > y ? 1 : (x == y ? 0 : -1);
    }

int main()
{
    double arr[N];
    int size = 10;
    qsort((void*)arr, size, sizeof(double), compare);


    return 0;
}
