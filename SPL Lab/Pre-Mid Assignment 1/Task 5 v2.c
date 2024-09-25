#include <stdio.h>

int main()
{
    long int n;
    printf("Enter an integer: ");
    scanf("%ld", &n);

    int factorCount = 1;
    int firstFactor;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            factorCount += 1;
            firstFactor = i;
            break;
        }
    }
    if (factorCount > 1)
        printf("Not prime, divisible by %d.\n", firstFactor);
    else
        printf("Prime\n");

    return 0;
}