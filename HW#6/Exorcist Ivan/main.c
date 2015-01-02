#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, exorcismSpeed, fatigueTime, flyReturnSpeed, time = 0;
    printf("Enter the amount of flies: ");
    scanf("%d", &n);
    printf("Enter the amount of flies thrown out per minute: ");
    scanf("%d", &exorcismSpeed);
    printf("Enter the time after which Ivan Vasiliyevich gets tired: ");
    scanf("%d", &fatigueTime);
    printf("Enter the amount of flies that return back per minute: ");
    scanf("%d", &flyReturnSpeed);
    for (int i = 1; i <= fatigueTime; ++i)
        {
            n -= exorcismSpeed + flyReturnSpeed;
            ++time;
            if (n == 0)
            {
                printf("Ivan Vasilyevich thrown out all the flies in %d minute(s)!", time);
            }
        }


        return 0;
}
