#include <stdio.h>
#include <stdbool.h>

int main()
{
    long int n;
    printf("Enter an integer: ");
    scanf("%ld", &n);

    if (n == 2 || n == 3)
    {
        printf("Prime\n");
    }
    else if (n % 2 == 0)
    {
        printf("Not Prime\n");
    }
    else
    {
        bool isPrime = false;
        for (int i = n / 2; i >= 3; i--)
        {
            if (n % i == 0)
            {
                isPrime = false;
                break;
            }
            else
            {
                isPrime = true;
            }
        }
        if (isPrime)
        {
            printf("Prime\n");
        }
        else
        {
            printf("Not Prime\n");
        }
    }

    return 0;
}