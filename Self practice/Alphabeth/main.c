#include <stdio.h>
#include <stdlib.h>

int main()
{
    char character, r, c, toTheEndOfAlphabeth, toTheBeginingOfAlphabeth;
    printf("Enter character:\n");
    scanf("%c", &character);
    if(character >= 'a' && character <= 'z')
    {
        character -= 32;
        c = character;
        printf("\n");
    }
    for(r = 'A'; r <= character; r++, c--);
    {
        for(toTheEndOfAlphabeth = 'A';  toTheEndOfAlphabeth<= c; toTheEndOfAlphabeth++)
        {
            printf("%c", &toTheEndOfAlphabeth);
        }
        for(toTheBeginingOfAlphabeth = c; toTheBeginingOfAlphabeth >= 'A'; toTheBeginingOfAlphabeth--)
        {
            printf("%c", &toTheBeginingOfAlphabeth);
        }
        printf("\n");
    }
    return 0;
}
