#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

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
                displayX0(m[horizontal/2][vertical/2]);
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

bool motion(int where, int what)
{
    bool ok = false;
    switch(where)
    {
    case 1:
        if(m[0][0] == 0)
        {
            m[0][0] = what;
            ok = true;
        }
        break;
    case 2:
        if(m[0][1] == 0)
        {
            m[0][1] = what;
            ok = true;
        }
        break;
    case 3:
        if(m[0][2] == 0)
        {
            m[0][2] = what;
            ok = true;
        }
        break;
    case 4:
        if(m[1][0] == 0)
        {
            m[1][0] = what;
            ok = true;
        }
        break;
    case 5:
        if(m[1][1] == 0)
        {
            m[1][1] = what;
            ok = true;
        }
        break;
    case 6:
        if(m[1][2] == 0)
        {
            m[1][2] = what;
            ok = true;
        }
        break;
    case 7:
        if(m[2][0] == 0)
        {
            m[2][0] = what;
            ok = true;
        }
        break;
    case 8:
        if(m[2][1] == 0)
        {
            m[2][1] = what;
            ok = true;
        }
        break;
    case 9:
        if(m[2][2] == 0)
        {
            m[2][2] = what;
            ok = true;
        }
        break;
    }

    return ok;
}

void computer()
{
    int x;
    do
    {
        srand(time(NULL));
        x = 1 + rand() % 9;
    }
    while(!motion(x, 2));
}

void player()
{
    int x;

    do
    {
        printf("Choose your position using numbers:\n");
        scanf("%d", &x);
    }
    while(!motion(x, 1));

}

int check()
{
    static int count = 0;

    for(int i = 0; i < 3; ++i)
    {
        if(m[i][0] == m[i][1] && m[i][1] == m[i][2])
        {
            if(m[i][0] == 1)
            {
                return 4;
            }
            else if(m[i][0] == 2)
            {
                return 3;
            }
        }
    }
    for(int i = 0; i < 3; ++i)
    {
        if(m[0][i] == m[1][0] && m[1][i] == m[2][i])
        {
            if(m[0][i] == 1)
            {
                return 4;
            }
            else if(m[0][i] == 2)
            {
                return 3;
            }
        }
    }
    if(m[0][0] == m[1][1] && m[1][1] == m[2][2])
    {
        if(m[0][0] == 1)
        {
            return 4;
        }
        else if(m[0][0] == 2)
        {
            return 3;
        }
    }
    if(m[2][0] == m[1][1] && m[1][1] == m[0][2])
    {
        if(m[0][0] == 1)
        {
            return 4;
        }
        else if(m[0][0] == 2)
        {
            return 3;
        }
    }
    if(++count == 9)
    {
        return 2;
    }

    return 1;

}


int main()
{
    bool comp = false;
    bool game = true;
    while(game)
    {
        display();
        if(comp)
        {
            computer();
        }
        else
        {
            player();
        }
        int r = check();
        switch(r)
        {
        case 1:
            comp = !comp;
            break;
        case 2:
            printf("Draw!\n");
            game = false;
            break;
        case 3:
            printf("Computer Win\n");
            game = false;
            break;
        case 4:
            printf("Player Win\n");
            game = false;
            break;
        }
    }
    display();

    return 0;
}
