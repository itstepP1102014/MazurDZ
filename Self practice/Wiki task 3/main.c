#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, spacesLeft;
    printf("Type number:\n");
    scanf("%d", &n);
    spacesLeft = n;
    for(int i = 0; i <= n; ++i)
    {
        printf("%*c\n", spacesLeft);
        --spacesLeft;
    }

    return 0;
}

