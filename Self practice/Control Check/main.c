#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int amountOfSpacesLeft = 0, amountOfSpacesBetween = n - 2;
    for(int i = 0; i < n; ++n)
    {
        for(int j = 0; j < n; ++j)
        {
            printf("%*c%*s%c", amountOfSpacesLeft, 'Y', amountOfSpacesBetween);
        }
    }printf("\n");

    return 0;
}
