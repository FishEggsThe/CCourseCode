// Matthew Leal, 11/29/2021, Assignment 10
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define WORDSIZE 25
#define PHRASESIZE 100


char initial(const char a[WORDSIZE]);
void asteriks(char a[]);
void reverse(const char a[], char b[]);
void plural(const char a[], char b[]);

int main()
{
    char firstName[WORDSIZE] = "";
    char lastName[WORDSIZE] = "";
    char quote[PHRASESIZE] = "";
    char newQuote[PHRASESIZE] = "";
    char nouns[PHRASESIZE] = "";
    char nounsPlural[PHRASESIZE] = "";

    printf("Give me your first and last name: ");
    scanf("%s%s", firstName, lastName);
    printf("Hello %s %s (%c.%c.)\n", firstName, lastName, initial(firstName), initial(lastName));

    printf("Give me your favorite quote: ");
    gets(quote);
    gets(quote);
    reverse(quote, newQuote); // doing this first to make things go swimmingly
    asteriks(quote);
    puts(quote);
    puts(newQuote);

    while(strcmp(nouns, "QUIT") != 0)
    {
        nounsPlural[0] = '\0';
        printf("Give me some nouns (submit \"QUIT\" to end): ");
        gets(nouns);
        if(strcmp(nouns, "QUIT") != 0)
        {
            plural(nouns, nounsPlural);
            puts(nounsPlural);
        }
    }

    return 0;
}

char initial(const char a[WORDSIZE])
{
    return toupper(a[0]);

}

void asteriks(char a[])
{
    for(int i = 0; i < strlen(a); i++)
    {
        if((int)(a[i]) == 32 || // [space]
           (int)(a[i]) == 33 || // !
           (int)(a[i]) == 34 || // "
           (int)(a[i]) == 39 || // '
           (int)(a[i]) == 44 || // ,
           (int)(a[i]) == 46 || // .
           (int)(a[i]) == 63)   // ?
            a[i] = '*';
        else if((int)(a[i]) == 0)
            break;
    }
}

void reverse(const char a[], char b[])
{
    char current[WORDSIZE], temp[PHRASESIZE];
    int j = 0;
    for(int i = 0; i <= strlen(a); i++)
    {
        if(a[i] == ' ' || i == strlen(a))
        {
            strncpy(current, (a+j), i - j);
            current[i-j] = '\0';
            strcat(current, " ");

            strcpy(temp, b);
            strcpy(b, current);
            strcat(b, temp);

            j = i + 1;
        }
    }
}

void plural(const char a[], char b[])
{
    char current[WORDSIZE];
    int j = 0;
    for(int i = 0; i <= strlen(a); i++)
    {
        if(a[i] == ' ' || i == strlen(a))
        {
            strncpy(current, (a+j), i - j);
            current[i-j]='\0';

            if(current[i-j-1]=='y')
            {
                strncat(b, current, i-j - 1);
                strcat(b, "ies ");
            }
            else if(current[i-j-1]=='s' ||
                    (current[i-j-1]=='h' && (current[i-j-2]=='c' || current[i-j-2]=='s')))
            {
                strncat(b, current, i-j);
                strcat(b, "es ");
            }
            else
            {
                strncat(b, current, i-j);
                strcat(b, "s ");
            }
            j = i +1;
        }
    }
}
