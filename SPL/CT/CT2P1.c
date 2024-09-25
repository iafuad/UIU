// Write a C program to remove adjacent duplicate character from a string
// AABBCCDDA -> ABCDA
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main()
{
    char inputStr[MAX_LENGTH], newStr[MAX_LENGTH];
    fgets(inputStr, MAX_LENGTH, stdin);

    char newChar[2] = {inputStr[0], '\0'};
    strcpy(newStr, newChar);
    for (int i = 1; i < strlen(inputStr); i++)
    {
        if (inputStr[i] == newChar[0])
            continue;
        else
        {
            newChar[0] = inputStr[i];
            strcat(newStr, newChar);
        }
    }

    fputs(newStr, stdout);

    return 0;
}
