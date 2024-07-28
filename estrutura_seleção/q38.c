#include <stdio.h>

int main()
{
    int year, isLeapYear = 0;

    scanf("%d", &year);

    if (year % 4 == 0)
        isLeapYear = 1;
    if (year % 100 == 0)
        isLeapYear = 0;
    if (year % 400 == 0)
        isLeapYear = 1;
    
    if (isLeapYear)
        printf("O ano %d é bissexto", year);
    else 
       printf("O ano %d não é bissexto", year); 
}