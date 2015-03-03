#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int n, units, scores, hundreds;
    scanf("%d", &n);
    units = n % 10;
    scores = (n % 100)/10;
    hundreds = n / 100;

    if(units == scores)
    {
        printf("Units and scores are the same numbers\n");
    }
    if(units == hundreds)
    {
        printf("Units and hundreds are the same numbers\n");
    }
    if(scores == hundreds)
    {
        printf("Scores and hundreds are the same numbers\n");
    }

    return 0;
}
