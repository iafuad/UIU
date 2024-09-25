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

    int peak = arr[0];
    for (int i = 1; i < arrSize - 1; i++)
    {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
        {
            peak = arr[i];
        }
    }
    if (peak == arr[0] && peak < arr[arrSize - 1])
    {
        peak = arr[arrSize - 1];
    }
    printf("A peak element from the array is %d\n", peak);

    return 0;
}