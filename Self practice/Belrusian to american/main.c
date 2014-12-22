#include <stdio.h>
#include <stdlib.h>

int main()
{
    int points;
    printf("Your points in belrusian system:\n");
    scanf("%d", &points);

    while(points == 85 || points < 100)
    {
        printf("A");
        return 0;
    }
    while(points == 70 || points < 84)
    {
        printf("B");
        return 0;
    }
    while(points == 50 || points < 69)
    {
        printf("C");
        return 0;
    }
    while(points == 30 || points < 49)
    {
        printf("D");
        return 0;
    }
    while(points == 1 || points < 29)
    {
        printf("F");
        return 0;
    }

}
