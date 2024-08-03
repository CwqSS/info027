#include <stdio.h>

int main()
{
    int popA, popB, anos; 
    float taxaNatalidadeA, taxaNatalidadeB;

    popA = 5000000;
    popB = 7000000;

    taxaNatalidadeA = 3.0 / 100;
    taxaNatalidadeB = 2.0 / 100;

    anos = 0;
    while (popA < popB)
    {
        popA *= 1 + taxaNatalidadeA;
        popB *= 1 + taxaNatalidadeB;
        anos += 1;
    }

    printf("O país A passará o país B em %d anos, quando aquele terá %d habitantes e esse %d.", anos, popA, popB);
}