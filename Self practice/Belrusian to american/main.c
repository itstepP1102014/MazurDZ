#include <stdio.h>
#include <stdlib.h>

int main()
{
    int points;
    printf("Your points in belrusian system:\n");
    scanf("%d", &points);

    if(points >= 85 && points < 100)
    {
        printf("A");
    }
    if(points >= 70 && points < 84)
    {
        printf("B");
    }
    if(points >= 50 && points < 69)
    {
        printf("C");
    }
    if(points >= 30 && points < 49)
    {
<<<<<<< HEAD
        printf("D");
=======
        printf("D");//
        return 0;
>>>>>>> d03b5092f7ce0406e93343f9ddbc50e374284ad8
    }
    if(points >= 0 && points < 29)
    {
        printf("F");
    }
    return 0;

}
