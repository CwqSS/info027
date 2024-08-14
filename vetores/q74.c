#include <stdio.h>
#include <stdlib.h>
#define TAM 30

//Falta o caso E. Este código está péssimo.

int main()
{
    int list[TAM];
    int wannaStop = 0;
    int iCont, element;
    char operation;

    for(iCont = 0; iCont < TAM; iCont++)
        list[iCont] = -1;

    printf("This is your list currently:\n");
    for(iCont = 0; iCont < TAM; iCont++)
        printf("| %d ", list[iCont]);

    printf("\nChoose a operation:\n\n");
        printf("a. Insert an element at the end\n");
        printf("b. Insert an element at a position\n");
        printf("c. Remove an element at a position X\n");
        printf("d. Remove all elements equal to a given value\n");
        printf("e. Generate a new array without duplicates from this array\n");
        printf("f. Show list\n");
        printf("g. Show operations\n");
        printf("h. Close program\n");

    while(!wannaStop)
    {  
        printf(" \n");
        printf(" Operation: ");
        scanf("%c", &operation);

        switch (operation)
        {
        case 'a':
        {   
            printf("\n");

            printf("Element: ");
            scanf("%d", &element);
            for(int changed = 0, iCont = 0; iCont < TAM && changed == 0; iCont++)
            {
                if (list[iCont] == -1)
                {
                    changed = 1;
                    list[iCont] = element;
                }
            }
            printf("\n");
        }
            break;
        case 'b':
        {
            printf("\n");
            int position;

            printf("Element: ");
            scanf("%d", &element);
            
            printf("Position(0 - 29): ");
            scanf("%d", &position);

            for(iCont = TAM - 1; iCont >= position; iCont--)
            {
                list[iCont + 1] = list[iCont];
            }
            list[position] = element;

            for(iCont = 0; iCont < position; iCont++)
            {
                if(list[iCont] == -1)
                    list[iCont] = 0;
            }
            printf("\n");
            
        }   
            break;
        case 'c':
        {
            printf("\n");
            int position;

            printf("\nPosition(0 - 29): ");
            scanf("%d", &position);

            for(iCont = position; iCont < TAM - 1; iCont++)
            {
                list[iCont] = list[iCont + 1];
            }
            list[TAM - 1] = -1;
            printf("\n");
        }
            break;
        case 'd':
        {
            printf("\n");
            
            int position;

            printf("Element: ");
            scanf("%d", &element);

            for(int kCont = TAM - 1; kCont >= 0; kCont--)
            {
                if(list[kCont] == element)
                {
                    for(iCont = kCont; iCont < TAM - 1; iCont++)
                    {
                        list[iCont] = list[iCont + 1];
                    }
                    list[TAM - 1] = -1;
                }
            }
            printf("\n");
        }
            break;
        case 'e':
        {
        }
            break;
        case 'f':
        {
            printf("\n");
            printf("This is your list currently:\n");
            for(iCont = 0; iCont < TAM; iCont++)
                printf("| %d ", list[iCont]);
            printf("\n");
        }
            break;
        case 'g':
        {
            printf("\n");
            printf("a. Insert an element at the end\n");
            printf("b. Insert an element at a position\n");
            printf("c. Remove an element at a position X\n");
            printf("d. Remove all elements equal to a given value\n");
            printf("e. Generate a new array without duplicates from this array\n");
            printf("f. Show list\n");
            printf("g. Show operations\n");
            printf("h. Close program\n");
            printf("\n");
        }
            break;
        case 'h':
        {
            printf("\n");
            printf("This is your list currently:\n");
            for(iCont = 0; iCont < TAM; iCont++)
                printf("| %d ", list[iCont]);
            wannaStop = 1;
            printf("\n");
        }
            break;
        default:
            break;
        }
    }
}