#include <stdio.h>

void bubbleSort(int arr[], int n, int swaps[])
{
    int i, j, temp;
    int totalSwaps = 0;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swaps[j + 1]++;
                totalSwaps++;
            }
        }
    }

    printf("Swaps needed for each index:\n");
    for (i = 0; i < n; i++)
    {
        printf("Index %d: %d\n", i, swaps[i]);
    }
    printf("Total swaps needed: %d\n", totalSwaps);
}

int main()
{
    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int n = sizeof(arr) / sizeof(arr[0]);
    int swaps[n];

    // Initialize swaps array with 0
    for (int i = 0; i < n; i++)
    {
        swaps[i] = 0;
    }

    bubbleSort(arr, n, swaps);

    return 0;
}
