#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main()
{
    char sentence[MAX_LENGTH], checkChar, checkCharUpper, checkCharLower;
    fgets(sentence, MAX_LENGTH, stdin);
    scanf("%c", &checkChar);

    char checkCharUpper = (checkChar >= 'a' && checkChar <= 'z') ? (checkChar - 'a' + 'A') : checkChar;
    char checkCharLower = (checkChar >= 'A' && checkChar <= 'Z') ? (checkChar - 'A' + 'a') : checkChar;

    // if (checkChar >= 'a' && checkChar <= 'z')
    // {
    //     checkCharUpper = ;
    // }
    // else if (checkChar >= 'A' && checkChar <= 'Z')
    // {
    //     checkCharLower = checkChar + 32;
    // }
    // else
    // {
    //     checkChar = checkCharUpper = checkCharLower;
    // }

    int occurence = 0;
    for (int i = 0; i < strlen(sentence); i++)
    {
        if (sentence[i] == checkChar || sentence[i] == checkCharUpper || sentence[i] == checkCharLower)
        {
            occurence++;
        }
    }

    printf("%d\n", occurence);

    // char testChar;
    // scanf("%c", &testChar);

    // printf("%c\n", testChar - 32);

    return 0;
}