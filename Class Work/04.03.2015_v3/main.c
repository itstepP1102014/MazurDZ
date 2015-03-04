#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[5] = "mama"; // локальная переменая в стеке,
    char *str2 = "mama"; // строковый литералб "readonly", !!! НЕ ИЗМЕНЯЕМАЯ СТРОКА !!!

    printf("%s\n%s\n", str1, str2);

    str1[0] = 'r';

    printf("%s\n%s\n", str1, str2);

    return 0;
}
