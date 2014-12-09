#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int player, comp=rand()%100, step=1;
    char answer;
    do
    {
        printf("Type your number 0 to 99:\n",player);
        scanf("%d",&player);
        if(player==comp)
        {
            break;
        }
        step += 1;
        if(player>comp)
        {
            printf("Guess what? It's MORE\n");
        }
        else
        {
            printf("Guess what? It's LESS\n");
        }

    }
    if(player!=comp);
    {
        printf("Great! You did it in %d steps!",step);
        printf("Would you like to play one more time?\n""y/n\n");
        scanf("%c",answer);
    }
    if('y'==answer)
    {
        do
        {
            printf("Type your number 0 to 99:\n",player);
            scanf("%d",&player);
            if(player==comp)
            {
                break;
            }
            step += 1;
            if(player>comp)
            {
                printf("Guess what? It's MORE\n");
            }
            else
            {
                printf("Guess what? It's LESS\n");
            }

        }
        if(player!=comp);
        {
            printf("Great! You did it in %d steps!",step);
            printf("Would you like to play one more time?\n""y/n\n");
            scanf("%c",answer);
        }
        if('y'==answer)
        }
    else
    {
        break;
    }

    return 0;
}
