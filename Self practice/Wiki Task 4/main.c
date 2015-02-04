#include <stdio.h>
#include <stdlib.h>

int main()
{
    int parenthesisCheck, a = 0;
    printf("Type example of parenthesis order to check it:\n");
    do
    {
        parenthesisCheck = getchar();
        if(parenthesisCheck = '(')
        {
            a++;
        }
        else(parenthesisCheck = ')' && --a < 0)

        {
            break;
        }
    }
    while(parenthesisCheck != '\n')
    {
        if(a == 0)
        {
            printf("This is right order\n");
        }
        else
        {
            printf("This is wrong order\n");
        }
    }
    return 0;
}
