#include <stdio.h>

void swapFunc(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("After swapping: %d %d\n", *x, *y);
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    swapFunc(&x, &y);

    return 0;
}