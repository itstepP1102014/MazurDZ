#include <stdio.h>
#include <time.h>
#include <assert.h>
#define SIZE 1000

void output_array(const int array[], int size)
{
    for(int i = 0; i < size; ++i)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void input_array(int array[], int size)
{
    for(int i = 0; i < size; ++i)
    {
        printf("Enter element[%d]: ", i);
        scanf("%d", &array[i]);
    }
}

int array_search(int number, const int array[], int size)
{
    for(int i = 0; i < size; ++i)
    {
        if(array[i] == number)
        {
            return i;
        }
    }
    return -1;
}

int min_of_array(const int array[], int cell)
{
    assert(cell > 0 && cell <= SIZE);
    int min = array[0];
    for(int i = 1; i < cell; ++i)
    {
        min = array[i] < min? array[i] : min;
    }
    return min;
}

int max_of_array(const int array[], int cell)
{
    assert(cell > 0 && cell <= SIZE);
    int max = array[0];
    for(int i = 1; i < cell; ++i)
    {
        max = array[i] > max? array[i] : max;
    }
    return max;
}

void generate_random_numbers_in_array(int array [], int cell)
{
    srand(time(NULL));
    assert(cell > 0 && cell <= SIZE);
    for(int i = 0; i < cell; ++i)
    {
        array[i] = rand()% 10;
    }
}
