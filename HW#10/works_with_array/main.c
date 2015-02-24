#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int size = 10;
    int arr[size], cell, i;
    char answer;

    srand(time(NULL));
    printf("Generate random array?\n"
           "yes\t no\n");
    scanf("%c", &answer);
    if(answer == 'y')
    {
        for(i = 0; i < size; ++i);
        {
            arr[i] = rand() % 100;
        }
    }
    else if(answer == 'n')
    {
        for(i = 0; i < size; ++i)
        {
            printf("Input %d element:\n", arr[i]);
            scanf("%d", &arr[i]);
        }
    }
    else
    {
        printf("ERROR");
        return -1;
    }

    printf("%d\t", arr[i]);

    return 0;
}
