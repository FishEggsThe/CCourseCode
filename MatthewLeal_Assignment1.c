// Matthew Leal, Cop2220, 9/3/2021

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day = 5, month = 5, initialNum;
    char initial = 'L';
    double result1, result2, dumpster1, dumpster2;

    //Birth day times 30 / Birth month times 12
    result1 = ((double)(day) * 30.0)/((double)(month) * 12.0);

    //Birth day times 30 / Birth month times 15
    result2 = ((double)(day) * 30)/((double)(month) * 15);

    month += 12;
    day += 30;

    dumpster1 = (double)(day) / (double)(month);
    dumpster2 = day % month;

    initialNum = (int)initial;

    return 0;
}
