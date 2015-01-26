#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Dices.h"
#include "d/Ким/MasterGit/modules/include/compatibility.h"

int main()
{
    srand(time(NULL));
    int humanScore, computerScore;
    char result;
    printf("What's up, let's play dices:\t""y/n\n");
    scanf(" %s", &result);
    if(result == 'y')
    {
        do
        {
            universalClear();
            printf("Computer rolls\r");
            universlaSleep(2);
            computerScore = dicesRoll();
            universalClear();
            printf("You roll\r");
            universalSleep(2);
            humanScore = dicesRoll();
            humanScore > computerScore? printf("You won!\n") : (humanScore < computerScore? printf("Computer won!\n") : printf("Draw!\n"));
            printf("One more time?\t""y/n\n");
            scanf(" %s", &result);

        }
        while(result == 'y');
    }

    return 0;
}
