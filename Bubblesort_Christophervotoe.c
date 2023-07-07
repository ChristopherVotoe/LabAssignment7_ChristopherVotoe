#include <stdio.h>

void bubble(int arr[], int n)
{
    int i, j, tmp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

int main()
{
    int num[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int n = sizeof(num) / sizeof(num[0]);
    bubble(num, n);
    printf("Sorted Array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", num[i]);
    }
    return 0;
}