#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

void shift(int a[SIZE][SIZE], int k, int row, int column)
{
    k %= column;
    for(int i = 0; i < k && column > 1; ++i)
    {
        int temp[SIZE];
        for(int j = 0; j < row; j++)
        {
            temp[j] = a[j][column - 1];
        }

        for(int y = column - 1; y >=0; --y)
        {
            for(int x = row - 1; x >=0; --x)
            {
                a[x][y]=a[x][y-1];
            }
        }


        for(int j = 0; j < row; j++)
        {
            a[j][0]=temp[j];
        }
    }
}

int main()
{
    int a[SIZE][SIZE], row, column, i, j, amount_of_steps;
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
    printf("\n");
    printf("Enter amount of steps:\n");
    scanf("%d", &amount_of_steps);
    shift(a, amount_of_steps, row, column);
    for(i = 0; i < row; ++i)
    {
        for(j = 0; j < column; ++j)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
