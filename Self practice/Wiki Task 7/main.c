#include <stdio.h>
#define N 100

int main()
{
    char a[N];
    int i;
    scanf("%s", &a);
    for(i = 0; a[i] != '\0'; ++i)
    {
        if(a[i] <= 'z' && a[i] >= 'a')
        {
            a[i] += 'A' - 'a';
        }
    }printf("%s\r\n", a);

    return 0;
}
