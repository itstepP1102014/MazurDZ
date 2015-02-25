#include <stdlib.h>
#include <time.h>

void generate_or_input(const int size, int array[size])
{

    int i;
    char answer;

    srand(time(NULL));
    printf("Generate random array?\n"
           "yes\t no\n");
    scanf("%c", &answer);
    if(answer == 'y')
    {
        for(i = 0; i < size; ++i)
        {
            array[i] = rand() % 100;
            printf("%d\n", array[i]);
        }
    }
    if(answer == 'n')
    {
       for(i = 0; i < size; ++i)
        {
            printf("Input %d element:\n", i);
            scanf("%d", &array[i]);
            printf("%d\n", array[i]);
        }
    }


}
