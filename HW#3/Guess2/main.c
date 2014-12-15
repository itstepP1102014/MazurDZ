#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    //int comp=rand()%99+1;
    int a=1,b=99;
    char answer;

    do
    {
        printf("%d\n",(a+b)/2);
        printf("Is it less/more than your number or equal?\n""l/m/e\n",answer);
        scanf(" %c",&answer);
        if(answer=='l')
        {
            a=(a+b)/2+1;
        }
        else if(answer=='m')
        {
            b=(a+b)/2-1;
        }
    }while(answer!='e');



    return 0;
}
