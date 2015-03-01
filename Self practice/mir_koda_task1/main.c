#include <stdio.h>
#include <stdlib.h>

int main()
{
    double date_of_searcing, date_of_birth;
    printf("Enter the current or various date\n"
           "And the person's date of birth:\n");
    scanf("%f %f", &date_of_searcing, &date_of_birth);
    printf("Current age of person is %.2f", date_of_searcing - date_of_birth);
    return 0;
}
