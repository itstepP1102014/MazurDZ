#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello, we're going to have fun this weekend!\n");
    char answer;
    printf("How about some activities?\ny/n:\t");
    scanf("%c", &answer);
    if(answer == 'y')
    {
        printf("1. Circus\n");
        printf("2. Skiing\n");
        printf("3. Nesvizh\n");
        printf("And we're going to ...\n");
        int input1;
        scanf("%d", &input1);
        switch (input1)
        {
        case 1:
            printf("Circus! Great, it's Winter Dreams Show!\n");
            break;
        case 2:
            printf("Skiing! Amazing, it's frosty enough!\n");
            break;
        case 3:
            printf("Nesvizh! Glorious, it's history time!\n");
            break;
        default:
            printf("Wrong input!\n");
        }
    }
    if(answer == 'n')
    {
        printf("1. Hookah Bar\n");
        printf("2. TV Show\n");
        printf("3. Jazz Bar\n");
        printf("So, what its gonna be, lazyboy?\n");
        int input2;
        scanf("%d", &input2);
        switch (input2)
        {
        case 1:
            printf("Smoke weed everyday\n");
            break;
        case 2:
            printf("Lazy Ars!\n");
            break;
        case 3:
            printf("Dave Brubeck and double bourbon, at least something.\n");
            break;
        default:
            printf("Wrong input!\n");
        }
    }


    return 0;
}
