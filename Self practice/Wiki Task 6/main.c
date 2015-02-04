#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf((b != 0 ?
            ("a + b = %d\n"
             "a - b = %d\n"
             "a * b = %d\n"
             "a / b = %d\n")
            :("a + b = %d\n"
              "a - b = %d\n"
              "a * b = %d\n")),
           a + b, a - b, a* b, (b != 0 ? a / b : 42));

    return 0;
}
