#include <stdio.h>
#include <stdlib.h>

int main()
{
    int xMas;
    printf("Amount of storeys:\n");
    scanf("%d", &xMas);
    for(int i = 0; i < xMas; ++i)
    {
        int spacesLeft = xMas - 1, spacesBetween = 1;
        printf("%*s\n", xMas + 1, "*");
        for(int j = 1; j < xMas; ++j)
        {
            printf("%*s%*s\n", spacesLeft + 1, "*", spacesBetween + 1, "*");
            --spacesLeft;
            spacesBetween +=2;
        }

    }
    return 0;
}
