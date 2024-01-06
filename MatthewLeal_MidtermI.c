//Matthew Leal, 10/8/2021, Midterm
#include <stdio.h>

int main()
{
    /* program 1

    int age;
    const double secondsInYear = 3.15;
    double ageInSeconds;
    printf("How old are you? ");
    scanf("%d", &age);
    ageInSeconds = age * secondsInYear;
    printf("%d year is %0.2fe7 seconds.", age, ageInSeconds);
    */

    /*program 2

    double a, b, c, max;
    printf("Enter the first number: ");
    scanf("%lf", &a);
    printf("Enter the second number: ");
    scanf("%lf", &b);
    printf("Enter the third number: ");
    scanf("%lf", &c);

    if(a == b && b == c && c == a)
        printf("These are all the same value...");
    else
    {
        if(a>b)
            max = a;
        else
            max = b;
        if(c>max)
            max = c;
        printf("\nValues: %0.2f, %0.2f, and %0.2f", a, b, c);
        printf("\nMaximum Value: %0.2f", max);
    }
    */

    /*program 3

    int n, i, counter = 0, avg = 0;
    do {
        printf("Enter a positive integer: ");
        scanf("%d", &n);
        if(n < 1)
            printf("Invalid number\n");
    } while(n < 1);

    for(i = n; i > 0; i--)
    {
        if((i%2) == 1)
        {
            counter++;
            printf("%d ", i);
            avg += i;
        }
    }
    avg /= counter;
    printf("\nAverage: %d", avg);
    */

    return 0;
}
