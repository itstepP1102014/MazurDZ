#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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

void player()
{
    int x, y;
    printf("Choose your position using numbers:\n");
    scanf("%d", &x);
    bool ok = false;
    switch(x)
    {
    case 1:
        if(m[0][0] == 0)
        {
            m[0][0] = 1;
            ok = true;
        }
        break;
    case 2:
        if(m[0][1] == 0)
        {
            m[0][1] = 1;
            ok = true;
        }
        break;
    case 3:
        if(m[0][2] == 0)
        {
            m[0][2] = 1;
            ok = true;
        }
        break;
    case 4:
        if(m[1][0] == 0)
        {
            m[1][0] = 1;
            ok = true;
        }
        break;
    case 5:
        if(m[1][1] == 0)
        {
            m[1][1] = 1;
            ok = true;
        }
        break;
    case 6:
        if(m[1][2] == 0)
        {
            m[1][2] = 1;
            ok = true;
        }
        break;
    case 7:
        if(m[2][0] == 0)
        {
            m[2][0] = 1;
            ok = true;
        }
        break;
    case 8:
        if(m[2][1] == 0)
        {
            m[2][1] = 1;
            ok = true;
        }
        break;
    case 9:
        if(m[2][2] == 0)
        {
            m[2][2] = 1;
            ok = true;
        }
        break;
    }
    if(!ok)
    {
        man();
    }

}

int main()
{

    display();

    return 0;
}
