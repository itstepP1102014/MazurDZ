#include <stdio.h>
#include <stdlib.h>

int main()
{
    int points;
    printf("Your points in belrusian system:\n");
    scanf("%d", &points);

    if(points > 85 && points <= 100)
    {
        printf("A");
    }
    if(points > 70 && points <= 85)
    {
        printf("B");
    }
    if(points > 50 && points <= 70)
    {
        printf("C");
    }
    if(points > 30 && points <= 50)
    {
        printf("D");
    }
    if(points <= 30)
    {
        printf("F");
    }

    return 0;

}
