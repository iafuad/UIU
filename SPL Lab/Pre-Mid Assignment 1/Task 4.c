#include <stdio.h>

int main()
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Invalid input!");
    }
    else if (n == 0)
    {
        printf("0! = 1\n");
    }
    else
    {
        long int lastProduct = n;

        for (int i = n - 1; i >= 1; i--)
        {
            lastProduct *= i;
        }

        printf("%d! = %ld\n", n, lastProduct);
    }

    return 0;
}