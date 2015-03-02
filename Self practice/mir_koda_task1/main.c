#include <stdio.h>
#include <stdlib.h>

int main()
{
    double date_of_searcing, date_of_birth, current_age;
    printf("Enter the current or various date\n"
           "And the person's date of birth:\n");
    //scanf("%lf %lf", &date_of_searcing, &date_of_birth);
    int year_of_birth, month_of_birth;
    scanf("%d.%d", &year_of_birth, &month_of_birth);

    current_age = date_of_searcing - date_of_birth;

   // printf("Current age of person is %.3f", current_age);
   printf("mon %d, year %d\n", month_of_birth, year_of_birth);
    return 0;
}
