#include <stdio.h>
#include <stdlib.h>

int main()
{
    char j[]="Jack", w[]="William", s[]="Sue", e[]="Eliza";
    double jW1, jW2, wW1, wW2, sW1, sW2, eW1, eW2;/**< 'w' is weight*/

    printf("%s 1st weight\n",j);
    scanf("%lf",&jW1);
    printf("%s 2nd weight\n",j);
    scanf("%lf",&jW2);
    printf("%s | %-.3f\n",j,jW2-jW1);
    printf("%s 1st weight\n",w);
    scanf("%lf",&wW1);
    printf("%s 2nd weight\n",w);
    scanf("%lf",&wW2);
    printf("%s | %-.3f\n",w,wW2-wW1);
    printf("%s 1st weight\n",s);
    scanf("%lf",&sW1);
    printf("%s 2nd weight\n",s);
    scanf("%lf",&sW2);
    printf("%s | %-.3f\n",s,sW2-sW1);
    printf("%s 1st weight\n",e);
    scanf("%lf",&eW1);
    printf("%s 2nd weight\n",e);
    scanf("%lf",&eW2);
    printf("%s | %-.3f\n",e,eW2-eW1);
    return 0;
}
