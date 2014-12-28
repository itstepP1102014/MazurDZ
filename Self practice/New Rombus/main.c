#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, spacesLeft, spacesBetween = 0;
    printf("Choose the symbol of the future rombus:\n");
    printf("1. '#'\n");
    printf("2. '*'\n");
    printf("3. '&'\n");
    int input;
    scanf("%d", &input);
    printf("Type the number:\t\n");
    scanf("%d", &number);
    spacesLeft = number - 1;
    switch(input)
    {
    case 1:
    {
        for(int i = 1; i < number; ++i)
        {
            printf("%*s%*s\n", spacesLeft + 1, "#", spacesBetween + 1, "#");
            --spacesLeft;
            spacesBetween +=2;
        }
        for(int j = 1; j <= number; ++j)
        {
            printf("%*s%*s\n", spacesLeft + 1, "#", spacesBetween + 1, "#");
            ++spacesLeft;
            spacesBetween -=2;
        }
        break;
    }
    case 2:
    {
        for(int i = 1; i < number; ++i)
        {
            printf("%*s%*s\n", spacesLeft + 1, "*", spacesBetween + 1, "*");
            --spacesLeft;
            spacesBetween +=2;
        }
        for(int j = 1; j <= number; ++j)
        {
            printf("%*s%*s\n", spacesLeft + 1, "*", spacesBetween + 1, "*");
            ++spacesLeft;
            spacesBetween -=2;
        }
        break;
    }
    case 3:
    {
        for(int i = 1; i < number; ++i)
        {
            printf("%*s%*s\n", spacesLeft + 1, "&", spacesBetween + 1, "&");
            --spacesLeft;
            spacesBetween +=2;
        }
        for(int j = 1; j <= number; ++j)
        {
            printf("%*s%*s\n", spacesLeft + 1, "&", spacesBetween + 1, "&");
            ++spacesLeft;
            spacesBetween -=2;
        }

        break;
    }

    default:
        printf("Wrong input!\n");
    }

    return 0;
}
