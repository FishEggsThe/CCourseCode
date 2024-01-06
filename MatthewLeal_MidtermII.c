#include <stdio.h>
#include <stdlib.h>

void array(double a[]);

int main()
{
    double weed[10] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0};
    array(weed);
    for(int i = 0; i < 10; i++)
        printf("\n%0.1f", weed[i]);
    return 0;
}

void array(double a[])
{
    double temp;
    for(int i = 0; i < (9 / 2); i++)
        {
            temp = a[i];
            a[i] = a[9 - i];
            a[9 - i] = temp;
        }
}
