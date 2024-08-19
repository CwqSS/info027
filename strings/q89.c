#include <stdio.h>
#define TAM 512

int main()
{
    char fullName[TAM], lastName[TAM], initials[TAM];
    int ndxFullName, ndxLastName, ndxInitials, amountSpace = 1;

    fgets(fullName, TAM, stdin);

    for(ndxFullName = 0; fullName[ndxFullName]; ndxFullName++)
        if (fullName[ndxFullName] == '\n')
        {
            fullName[ndxFullName] = '\0';
            ndxFullName -= 1;
        }
    
    for(ndxFullName; fullName[ndxFullName] != ' '; ndxFullName--);
    ndxFullName += 1;

    for(ndxLastName = 0; fullName[ndxFullName]; ndxLastName++, ndxFullName++)
        lastName[ndxLastName] = fullName[ndxFullName];
    lastName[ndxLastName] = '\0';

    ndxInitials = 0;
    for(ndxFullName = 0; fullName[ndxFullName]; ndxFullName++)
    {
        if(amountSpace && fullName[ndxFullName] >= 'A' && fullName[ndxFullName] <= 'Z')
        {
            amountSpace = 0;
            initials[ndxInitials] = fullName[ndxFullName];
            ndxInitials += 1;
        }
        else if (fullName[ndxFullName] == ' ')
            amountSpace = 1;
    }
    initials[ndxInitials - 1] = '\0';

    printf("%s, ", lastName);
    for(ndxInitials = 0; initials[ndxInitials]; ndxInitials++)
        if(initials[ndxInitials+1])
            printf("%c, ", initials[ndxInitials]);
        else
            printf("%c.", initials[ndxInitials]);
}