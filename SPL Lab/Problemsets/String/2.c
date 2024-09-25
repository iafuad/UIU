// Write a program in C to concatenate two strings without using any library function.
#include <stdio.h>

const int INPUT_MAX_LENGTH = 100;

int main()
{
    char testStr1[INPUT_MAX_LENGTH], testStr2[INPUT_MAX_LENGTH], concatStr[INPUT_MAX_LENGTH*2];
    fgets(testStr1, INPUT_MAX_LENGTH, stdin);
    fgets(testStr2, INPUT_MAX_LENGTH, stdin);

    for (int i = 0; i < INPUT_MAX_LENGTH * 2; i++)
    {
        if (testStr1[i] != '\0')
            concatStr[i] = testStr1[i];
    }

    return 0;
}