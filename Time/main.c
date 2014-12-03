#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h, m, s;/**< 'h' is hours, 'm' is minutes, 's' is seconds */
    printf("Type 1st time\n");
    scanf("%d %d %d",&h,&m,&s);
    printf("%0.2d:%0.2d:%0.2d\n",h,m,s);
    printf("Type 2nd time:\n");
    scanf("%d %d %d",&h,&m,&s);
    printf("%0.2d:%0.2d:%0.2d\n",h,m,s);
    printf("Type 3rd time:\n");
    scanf("%d %d %d",&h,&m,&s);
    printf("%0.2d:%0.2d:%0.2d\n",h,m,s);
    return 0;
}
