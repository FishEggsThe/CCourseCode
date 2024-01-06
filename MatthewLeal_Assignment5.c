// Matthew Leal 10/6/2021, Assignment 5
#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159265

int main()
{
    // Initializing variables
    // nApp is the approximate value while nAcc is the accurate value
    int n = 1, i, nAcc;
    double nApp, error;
    char userInput = 'Y';

    // The while loop that determines our fate
    while(userInput == 'Y' || userInput == 'y')
    {
        // Prompt with the following scan function
            printf("Enter a value for n: ");
            scanf("%d", &n);

            if(n > 0)
            {
                // nApp and nAcc calculations
                nApp = pow(n, n) * exp(-n) * sqrt(((2.0*(double)(n)) + (1.0/3.0)) * PI);
                printf("\n%d! equals approximately %0.5f", n, nApp);
                nAcc = 1;
                for(i = n; i > 0; i--)
                {
                    nAcc *= i;
                }
                nAcc = abs(nAcc);
                printf("\n%d! is %d accurately.", n, nAcc);

                // Error percent calculation
                error = (fabs(nAcc) - fabs(nApp)) / fabs(nAcc) * 100.0;
                printf("\nThe percent error is %0.8f", error);
            }
            else if(n == 0)
                printf("0! is 1");
            else
                printf("That is invalid");

        // Asking the user if they'd like to enter another value
        printf("\n\nWould you like to enter another value (input 'Y' if yes)? ");
        scanf(" %c", &userInput);
    }
    // The final print function
    printf("\nthamks :\)");

    //return 0;
    return 0;
}
