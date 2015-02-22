#include <assert.h>
#include "/../../../../modules/include/array.h"

void generate_or_input(int array[], int cell)
{
    char answer;

    printf("Would you like to generate numbers n array?\n"
           "y/n\n");
    scanf("%c", &answer);
    assert(answer == 'y' || answer 'n');
    switch(answer)
    {
    case 'y':
        generate_random_numbers_in_array(array[], cell);
        break;
    case 'n':
        input_array(array[], cell);
        break;
    }
}
