#include <stdio.h>

int main()
{
    char stations[100];
    printf("Enter the stations: ");
    scanf("%[^\n]", stations);

    for (int i = 0; i < 100; i++)
    {
        char station = stations[i];
        if (station == ' ')
            continue;
        if (station < 'a' || station > 'z')
            break;
        if (station == 'm' || station == 'p' || station == 'q')
        {
            printf("The bus will not stop at station %c\n", station);
        }
        else if (station == 'x')
        {
            printf("The bus completed its journey at station %c\n", station);
            break;
        }
        else
        {
            printf("The bus is stopping at station %c\n", station);
        }
    }

    return 0;
}