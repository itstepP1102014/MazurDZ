#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello, we're going to have fun this weekend!\n");
    printf("How about some activities?\n");
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


    return 0;
}
