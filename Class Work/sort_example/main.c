#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void output_array(const int *a, int n);
void generate_array(int *a, int n, int up, int down);

void bubble_sort(int *a, int n, bool (*less)(int, int));
int sum_of_digit(int a)
{
    a = a> 0? a : -a;
    int result = 0;
    while(a)
    {
        result += a % 10;
        a /= 10;
    }
    return result;
}

bool less(int a, int b)
{
    return sum_of_digit(a) > sum_of_digit(b);
}

int main()
{
    srand(time(NULL));
    int *array = NULL;
    array = (int*)malloc(10*sizeof(int));
    generate_array(array, 10, 0, 15);
    output_array(array, 10);
    bubble_sort(array, 10, less);
    output_array(array, 10);
    free(array);
    array = NULL;
    return 0;
}

void output_array(const int *a, int n)
{
    for(int i = 0; i < n; ++i)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void generate_array(int *a, int n, int up, int down)
{
    for(int i = 0; i < n; ++i)
    {
        a[i] = rand() % (up - down + 1) + down;
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int *a, int n, bool (*less)(int, int))
{
    for(int i = 1; i < n; ++i)
    {
        for(int j = 0; j < n -i; ++j)
        {
            if(less(a[j + 1], a[j]))
            {
                swap(&a[j], &a[j + 1]);
            }
        }
    }
}

