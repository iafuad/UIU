#include <stdio.h>

int nextNum, sum = 0;

int addNums(int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nextNum);
        sum += nextNum;
    }

    return sum;
}

int main()
{
    int n;
    scanf("%d", &n);
    addNums(n);
    printf("%d\n", sum);

    return 0;
}