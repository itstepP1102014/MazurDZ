#include <stdlib.h>
#include <time.h>
const int size = 10;
void generate_or_input(const int size, int arr[size], int cell)
{

    int arr[size], i;
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
            printf("%d", arr[i]);
        }
        printf("\n");
    }
    if(answer == 'n')
    {
        for(i = 0; i < size; ++i)
        {
            printf("Input %d element:\n", i);
            scanf("%d", &arr[i]);
        }
        printf("%d\n", arr[i]);
    }

}
