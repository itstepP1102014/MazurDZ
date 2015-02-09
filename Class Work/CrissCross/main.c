#include <stdio.h>
#include <stdlib.h>

int m[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};


void displayX0(int i)
{
    if(i == 0)
    {
        printf(" ");
    }
    else if(i == 1)
    {
        printf("X");
    }
    else
    {
        printf("0");
    }
}

void display()
{
    for(int vertical = 0; vertical < 5; ++vertical)
    {
        for(int horizontal = 0; horizontal < 5; ++horizontal)
        {
            if(horizontal % 2 == 0 && vertical % 2 == 0)
            {
                printf("%d",m[horizontal/2][vertical/2]);
            }
            else if(vertical % 2 == 0)
            {
                printf("|");
            }
            else
            {
                printf("-");
            }
        }
        printf("\n");
    }
}

int main()
{

    display();

    return 0;
}
