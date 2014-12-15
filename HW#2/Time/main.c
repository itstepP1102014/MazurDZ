#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h, m, s, h1, m1, s1, h2, m2, s2;/**< 'h' is hours, 'm' is minutes, 's' is seconds */
    printf("Type 1st time\n");
    scanf("%d %d %d",&h,&m,&s);
    printf("Type 2nd time:\n");
    scanf("%d %d %d",&h1,&m1,&s1);
    printf("Type 3rd time:\n");
    scanf("%d %d %d",&h2,&m2,&s2);
    printf("%0.2d:%0.2d:%0.2d\n%0.2d:%0.2d:%0.2d\n%0.2d:%0.2d:%0.2d\n",h,m,s,h1,m1,s1,h2,m2,s2);
    return 0;
}
