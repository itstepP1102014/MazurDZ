#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main()
{
    srand(time(NULL));
    int humanScore=0, computerScore=0;
    //--
    do
    {
        humanScore=rand()%11+1+rand()%11+1;
        computerScore=rand()%11+1+rand()%11+1;
    }
    while(humanScore>21 || computerScore>21);
    //--
    printf("Your score is:\n%d\n",humanScore);
    char answer='y';
    if(humanScore>11)
    {
        printf("Would you like to take another card?\n""(y/n):\n");
        scanf("%c",&answer);
    }
    if('y'==answer)
    {
        humanScore=rand()%11+1;
    }
    int computerWillTake=1;
    if(computerScore>11)
    {
        computerWillTake=21-computerScore<rand()%21;
    }
    if(computerWillTake)
    {
        computerScore=rand()%11+1;
    }
    while (answer=='y'&&computerWillTake&&humanScore<21 &&computerScore<21)
    {
        printf("Your score is:\n",humanScore);
        answer='y';
        if(humanScore>11)
        {
            printf("Would you like to take another card?\n""(y/n):\n");
            scanf("%c",&answer);
        }
        if('y'==answer)
        {
            humanScore=rand()%11+1;
        }
        computerWillTake=1;
        if(computerScore>11)
        {
            computerWillTake=21-computerScore<rand()%21;
        }
        if(computerWillTake)
        {printf("You win!\nYour score %d",humanScore);
            computerScore=rand()%11+1;
        }
    }
    while(answer=='y'&&humanScore<21)
    {
        printf("Your score is:\n",humanScore);
        answer='y';
        if(humanScore>11)
        {
            printf("Would you like to take another card?\n""(y/n):\n");
            scanf("%c",&answer);
        }
        if('y'==answer)
        {
            humanScore=rand()%11+1;printf("You win!\nYour score %d",humanScore);
        }
    }
    while(computerWillTake&&computerScore<21)
    {
        computerWillTake=1;
        if(computerScore>11)
        {
            computerWillTake=21-computerScore<rand()%21;
        }
        if(computerWillTake)
        {
            computerScore=rand()%11+1;
        }
    }
    //---
    if(humanScore==21)
    {
        printf("You win!\nYour score %d",humanScore);
    }
    else if(humanScore>21)
    {
        printf("You LOOSE!\n");
    }
    else if(computerScore<=21&&humanScore<computerScore)
    {
        printf("You LOOSE!\n");
    }
    else if(computerScore==humanScore)
    {
        printf("Draw!");
    }
    else
    {
        printf("You win!\nYour score %d",humanScore);
    }


    return 0;
}
