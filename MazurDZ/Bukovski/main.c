#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    for(int i=3; i<27; i+=i%3)
    {
        printf("%d\n",i);
    }
    return 0;
}
