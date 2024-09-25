#include <stdio.h>

int isPrime(int n)
{
    int isPrime = 1;
    for (int i = 2; i < n / 2; i++)
    {
        if (n / i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    return isPrime;
}

void generatePrime(int n)
{
    printf("Primes less than %d: ", n);
    for (int i = n - 1; i >= 2; i--)
    {
        if (isPrime(i) == 1)
            printf("%d ", i);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    generatePrime(n);
}