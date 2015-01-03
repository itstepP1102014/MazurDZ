#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, result = 0;
    char operation;
    printf("Enter first number, operation and second number\n");
    scanf("%d%c%d", &a, &operation, &b);
    switch (operation)
    {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        result = a / b;
    }
    system("cls");
    printf("%d", result);
    return 0;
}
