#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

void shift(int a[SIZE][SIZE], int k, int row, int column)
{
    k %= column;
    if(column < 1)
    {
        return;
    }
    for(int i = 0; i < k && column > 1; ++i)
    {
        //перенести все элементы последнего столбца в временный массив

        int temp[SIZE];//
        for(int j = 0; j < column; j++)
        {
            temp[j] = a[j][row - 1];
        }
        for(int x = row - 1; x > 0; --x)
        {
            for(int y = column - 1; y > 0; --y)
            {
                a[y] = a[y - 1];
            }

            a[x] = a[x - 1];
        }

    }
}

int main()
{
    int a[SIZE][SIZE], row, column, i, j;
    printf("Choose the order of the Matrix. (5*5 for ex.)\n");
    scanf("%d%d", &row, &column);
    srand(time(NULL));
    for(i = 0; i < row; ++i)
    {
        for(j = 0; j < column; ++j)
        {
            a[i][j]=rand()%100;
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}
