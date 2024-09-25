#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main()
{
    char sentence[MAX_LENGTH], word[MAX_LENGTH], wordList[MAX_LENGTH][MAX_LENGTH];
    fgets(sentence, MAX_LENGTH, stdin);
    fgets(word, MAX_LENGTH, stdin);

    int wordCount = 0;
    for (int i = 0; i < strlen(sentence); i++)
    {
        if (sentence[i] == ' ')
        {
            
        }
            wordCount++;
    }
    return 0;
}