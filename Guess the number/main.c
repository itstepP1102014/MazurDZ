#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int player, comp=rand()%99+1, step=1;
    char answer;
    printf("Would you like to play?:\n""y/n\n",answer);
    scanf(" %c",&answer);
    if('y'==answer)
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
        if(player<comp)
        {
            printf("Guess what? It's LESS\n");
        }
        if(player!=comp)
        {
            printf("Great! You did it in %d steps!\n",step);
        }
    }
    else if
    {
        break;
    }

        return 0;
    }
