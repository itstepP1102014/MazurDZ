#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5][5], row, column, i, j;
    printf("Choose the order of the Matrix. (5*5)\n");
    scanf("%d%d", &row, &column);
    printf("Enter the element of the Matrix:\n");
    for(i = 0; i < row; ++i)
    {
        for(j = 0; j < column; ++j)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < row; ++i)
    {
        for(j = 0; j < column; ++j)
        {
            if(a[i][j] != 0)
            {
                printf("%d %d %d", i + 1, j + 1, a[i][j]);
            }
        }
    }

    return 0;
}
