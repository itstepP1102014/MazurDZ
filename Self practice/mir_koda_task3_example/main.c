#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int sum = 0;
    for(int i = 0; i != 101; ++i)
    {
        sum += i;
    }

    printf("%d\n", sum);

    return 0;
}
