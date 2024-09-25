#include <stdio.h>

int main()
{
    int number, is_lucky = 1, all_even = 1, all_odd = 1;

    scanf("%d", &number);

    if (number == 0)
    {
        printf("Lucky Number\n");
        return 0;
    }

    while (number > 0)
    {
        int digit = number % 10;

        if (digit % 2 == 0)
        {
            all_odd = 0;
        }
        else
        {
            all_even = 0;
        }

        if (all_odd == 0 && all_even == 0)
        {
            is_lucky = 0;
            break;
        }

        number /= 10;
    }

    if (is_lucky)
    {
        printf("Lucky Number\n");
    }
    else
    {
        printf("Not a Lucky Number\n");
    }

    return 0;
}