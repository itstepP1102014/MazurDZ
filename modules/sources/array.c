#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <assert.h>
#include "../include/array.h"
#define SIZE 100

void output_array(int *array, int SIZE)
{
   for(int i = 0; i < SIZE; ++i)
   {
       printf("%d\n", array[i]);
   }
}

void input_array(int *array, int SIZE)
{
    printf("Enter %d elements:\n", SIZE);
    for(int i = 0; i < SIZE; ++i)
    {
        scanf("%d", &array[i]);
    }
}

int array_search(int *array, int SIZE, int number)
{
    for(int i = 0; i < SIZE; ++i)
    {
        if(array[i] == number)
        {
            return i;
        }
        else
        {
            return -1;
        }
    }
}

int min_of_array(int *array, int cell, int min)
{
    assert(cell > 0 && cell <= SIZE);
    min = array[0];
    for(int i = 1; i < cell; ++i)
    {
        min = array[i] < min ? array[i] : min;
    }
    return min;
}
int max_of_array(int *array, int cell, int max)
{
    assert(cell > 0 && cell <= SIZE);
    max = array[0];
    for(int i = 1; i < cell; ++i)
    {
        max = array[i] < max ? array[i] : max;
    }
    return max;
}
void generate_random_numbers_in_array(int *array, int cell)
{
    srand(time(NULL));
    for(int i = 0; i < SIZE; ++i)
    {
        array[i] = rand() % 100;
    }
}
