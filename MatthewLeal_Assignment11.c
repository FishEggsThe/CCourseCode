// Matthew Leal, 12/8/2021, Assignment 11
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50

int checkIfPalindrome(const char s[], int i);

int main()
{
    char sentence[MAX] = "";
    char palinSentence[MAX] = "";
    int isPalin = -1;
    int newI = 0;

    printf("Please input a string value.\n");
    gets(sentence);

    for(int i = 0; i <= strlen(sentence); i++)
    {
        if(sentence[i] >= 97 && sentence[i] <= 122)
        {
            palinSentence[newI] = sentence[i];
            newI++;
        }
        else if(sentence[i] >= 65 && sentence[i] <= 90)
        {
            palinSentence[newI] = (sentence[i] + 32);
            newI++;
        }
    }

    isPalin = checkIfPalindrome(palinSentence, 0);

    if(isPalin == 1)
        printf("It's a palindrome");
    else if(isPalin == 0)
        printf("It's NOT a palindrome");
    else
        printf("what");

    return 0;
}

int checkIfPalindrome(const char s[], int i)
{
    if(i >= strlen(s)-i-1)
        return 1;
    else if(s[i] == s[strlen(s)-i-1])
        return checkIfPalindrome(s, i+1);
    else
        return 0;
}
