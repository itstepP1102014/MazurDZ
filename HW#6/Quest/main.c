#include <stdio.h>
#include <stdlib.h>

int main()
{
    char answer;
    for(int i = 0; i < 1500; ++i)
    {
        printf("Wake up, Neo...\r");
    }
    system("cls");
    for(int j = 0; j < 1500; ++j)
    {
        printf("The Matrix have you...\r");
    }
    system("cls");
    for(int k = 0; k < 1500; ++k)
    {
        printf("I was looking for you, Neo...\r");
    }
    system("cls");
    printf("Now you have to do something to meet me, are you ready?\n""y/n\n");
    scanf(" %c", &answer);
    switch(answer)
    {
    case 'y':
        system("cls");
        for(int a = 0; a < 1000; ++a)
        {
            printf("Follow the white rabbit...\r");
        }
        system("cls");
        printf("Suddenly you found out yourself back in the office with th FedEx delivery.\n\n");
        printf("There is a cellphone inside.\n\n");
        printf("Suspiciously familiar voice telling you're in great danger.\n\n");
        printf("Will you follow it's advices?\n\n");
        printf("y/n\n");
        scanf(" %c", &answer);
        switch(answer)
        {
        case 'y':
            system("cls");
            printf("Crawl through the hall straight to the office\n\n");
            printf("There is a hanging stage behind the window\n\n");
            printf("Step by step you moving to the stage\n\n");
            printf("You're too scared. Will you make the final step on the stage?\n\ny/n\n");
            scanf(" %c", &answer);
            switch(answer)
            {
            case 'y':
                system("cls");
                printf("Small step for man , a great step for mankind\n\n");
                printf("Your journey just started...");
                break;
            case 'n':
                system("cls");
                printf("Strange people took you to the secret floor.\n\n");
                printf("They asked about Morpheus and your hacking life.\n\n");
                printf("They grabbed you and implanted under the skin mechanical arthropod.\n\n");
                printf("Next morning the strange feeling of surveillance followed you.\n\n");
                printf("In the evening the stranger took you to the hood apartments\n\n");
                printf("Finally, you met the Morpheus.\n\n");
                printf("After the story of the original world and your destination he giving you two pils: red and blue.\n\n");
                printf("r/b\n");
                scanf(" %c", &answer);
                switch(answer)
                {
                case 'r':
                    system("cls");
                    printf("Welcome to the Realm, Neo...\n");
                    break;
                case 'b':
                    system("cls");
                    printf("You're Paul Anderson. That is it.\n");
                    break;
                }
                break;
            }
            break;
        case 'n':
            system("cls");
            printf("Maybe you're right and it's easier to live simple stressless life\n\n");
            printf("See you next life, Neo...\n\n");
            break;
        }
        break;
    case 'n':
        system("cls");
        printf("You woke up in the morning with no idea of what had happened yesterday\n");
        break;
    default:
        system("cls");
        printf("ERROR!\n");
    }

    return 0;
}
