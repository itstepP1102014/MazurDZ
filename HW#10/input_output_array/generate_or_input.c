#include "../../modules/include/array.h"

void generate_or_input(int array[], int cell)
{
    char answer;

    printf("Would you like to generate numbers n array?\n"
           "y/n\n");
    scanf("%c", &answer);
    if(answer != 'y' && answer != 'n')
    {
        printf("ERROR!\n");
    }
    else if(answer == 'y')
    {
        generate_random_numbers_in_array(array[], cell);
    }
    else(answer == 'n')
    {
        input_array(array[], cell);
    }

    return 0;

}
