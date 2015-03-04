#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int a = 0xFEFEFEFEFEFEFEFE; // 8 байт
    char str[9] = "mama\n123"; // +1 к количеству символов в строчке; любые символы
    long long int b = 0xDADADADADADADADA;

    printf("%s\n", str);
    for(char *p = str; *p; ++p)
    {
        printf("%c\t%#x\n", *p, *p);
    }

    return 0;
}
