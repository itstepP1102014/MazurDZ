#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[5] = "mama"; // ��������� ��������� � �����,
    char *str2 = "mama"; // ��������� �������� "readonly", !!! �� ���������� ������ !!!

    printf("%s\n%s\n", str1, str2);

    str1[0] = 'r';

    printf("%s\n%s\n", str1, str2);

    return 0;
}
