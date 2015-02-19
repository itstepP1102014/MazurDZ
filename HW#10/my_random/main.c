#include <stdio.h>
#include <stdlib.h>
#include "my_random_function.h"

int main()
{
    printf("Random number from Wikipedia = %d\n", random_wiki());
    printf("My random number = %d\n", my_random_function());

    return 0;
}

