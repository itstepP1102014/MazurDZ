#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Alex = 1000, Basil = 1000, aPeriodCount = 0, bPeriodCount = 0, aTotal, bTotal;
    do
    {
        int i = 1;
        printf("%d\t%d\t%d\n", i, aPeriodCount + 60, bPeriodCount);
        aPeriodCount = (Alex % 100) * 6;
        aTotal = aPeriodCount;
        bPeriodCount += (Basil % 100) * 4;
        bTotal = bPeriodCount;
        i++;
    }while(aTotal != bTotal);

    return 0;
}
