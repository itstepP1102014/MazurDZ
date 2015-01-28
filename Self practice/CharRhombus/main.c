#include <stdio.h>
#include <conio.h>

int main()
{
    char character, r, c, chh;
    int sp;
    printf("Enter character:\n");
    scanf("%c", &character);
    if(character >= 'a' && character <= 'z')
    {
        character -= 32;
    }
    printf("\n");
    for(r = 'A'; r <= character; ++r)
    {
        for(sp = character - r; sp >= 1; --sp)
        {
            printf(" ");
        }
        for(c = 'A'; c <= r; ++c)
        {
            printf("%c", c);
        }
        for(c = r - 1; c >= 'A'; --c)
        {
            printf("%c", c);
        }
        printf("\n");
    }
    for(r = 'A'; 'A' <= character; character--, ++r)
    {
        for(sp = r; sp >= 'A'; --sp)
        {
            printf(" ");
        }
        for(c = 'A'; c <= character - 1; ++c)
        {
            printf("%c", c);
        }
        for(c = character -2; c >= 'A'; --c)
        {
            printf("%c", c);
        }
        printf("\n");
    }
    getch();
    return 0;
}
