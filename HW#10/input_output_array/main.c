#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int SIZE = 10, array[SIZE], i;
    char answer;
    srand(time(NULL));

    printf("Would you like to generate array?:\n"
           "y/n\n");
    scanf("%c", &answer);
    switch(answer)
    {
    case 'y':
        for(i = 0; i < SIZE; ++i)
        {
            array[i] = rand() % 10;
        }
        break;
    case 'n':
        printf("Enter %d elements of your array:\n", SIZE);
        scanf("%d", &array[i]);
        break;
    }
    for(i = 0; i < SIZE; ++i)
    {
        printf("%d\n", array[i]);
    }

    return 0;
}
