#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int a, b, c, searching_number = 0;
    for(int n = 102; n < 987; ++n)
    {
        c = n % 10;
        b = (n % 100)/10;
        a = n / 100;
        if(a != b != c)
        {
            searching_number++;
        }
    }

    printf("%d\n", searching_number);

    return 0;
}
