#include <stdio.h>

int main()
{
    int arrSize;
    printf("Enter the size of the array: ");
    scanf("%d", &arrSize);

    int arr[arrSize];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < arrSize; i++)
    {
        scanf("%d", &arr[i]);
    }

    int min, max;
    min = max = arr[0];
    for (int i = 1; i < arrSize; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);

    return 0;
}