#include <stdio.h>
#include <stdlib.h>

int main()
{
    char answer;
    for(int i = 0; i < 2000; ++i)
    {
        printf("Wake up, Neo...\r");
    }
    system("cls");
    for(int j = 0; j < 2000; ++j)
    {
        printf("The Matrix have you...\r");
    }
    system("cls");
    for(int k = 0; k < 2000; ++k)
    {
        printf("I was looking for you, Neo...\r");
    }
    system("cls");
    printf("Now you have to do something to meet me, are you ready?\n""y/n\n");
    scanf("%c", &answer);
    switch(answer)
    {
    case 'y':
        for(int a = 0; a < 1000; ++a)
        {
            printf("Follow the white rabbit...\r");
        }
        system("cls");
        for(int b = 0; b < 2000; ++b)
        {
            printf("Trinity told you everything. Now it's up to you.\r");
        }
        system("cls");
        printf("Suddenly you've got FedEx delivery. Are you going to open it?\n""y/n\n");
        scanf("%c", &answer);
        switch(answer)
        {
        case 'y':
            system("cls");
            printf("You found a cellphone. It's calling. The voice out of it giving you advices. Will you follow them?\n""y/n\n");
            scanf("%c", &answer);
            switch(answer)
            {
            case 'y':
                system("cls");
                printf("You have to crawl through the hall straight to the office.\n");
                printf("Now you're staying in front of the door.\n");
                printf("You're very curious about your followers\n");
                printf("1\tCheck the followers\n2\tOpen the door\n");
                int input;
                scanf("%d", &input);
                switch(input)
                {
                case 1:
                    system("cls");
                    printf("Strange people took you to their office, and asked about your secret life of hacker, about Morpheus.\n");
                    printf("They grabbed you and did something, then you fall asleep.\n");
                    printf("You waked up back in your apartments.\n");
                    printf("Strange figure in the street seems to be watching you. Looks like you know her...\n");
                    printf("And you're going to check it...\n");
                    break;
                case 2:
                    system("cls");
                    printf("You are in the office.\n");
                    printf("The voice told you to get into the window.\n");
                    break;
                default:
                    system("cls");
                    printf("Strange people took you to their office, and asked about your secret life of hacker, about Morpheus.\n");
                    printf("They grabbed you and did something, then you fall asleep.\n");
                    printf("You waked up back in your apartments.\n");
                    printf("Strange figure in the street seems to be watching you. Looks like you know her...\n");
                    printf("But you totally don't want to check it...\n");
                }
                break;
            case 'n':
                system("cls");
                printf("Strange people took you to their office, and asked about your secret life of hacker, about Morpheus.\n");
                printf("They grabbed you and did something, then you fall asleep.\n");
                printf("You waked up back in your apartments.\n");
                printf("Strange figure in the street seems to be watching you. Looks like you know her...\n");
                printf("But you totally don't want to check it...\n");
                break;
            default:
                system("cls");
                printf("Agents got you...\n");
            }
            break;
        case 'n':
            system("cls");
            printf("Strange people took you to their office, and asked about your secret life of hacker, about Morpheus.\n");
            printf("They grabbed you and did something, then you fall asleep.\n");
            printf("You waked up back in your apartments.\n");
            printf("Strange figure in the street seems to be watching you. Looks like you know her...\n");
            printf("But you totally don't want to check it...\n");
            break;
        default:
            system("cls");
            printf("Agents got you...\n");
        }

        return 0;
    }
