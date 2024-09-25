// Write a program in C to find the length of a string without using any library function.
#include <stdio.h>

const int MAX_LENGTH = 100;

int main()
{
    char testStr[MAX_LENGTH];
    fgets(testStr, MAX_LENGTH, stdin);

    int charCount;
    for (int i = 0; testStr[i] != '\0'; i++)
        charCount = i;

    printf("%d\n", charCount);

    return 0;
}