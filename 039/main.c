#include <stdio.h>
#define MAX 50

void selectionSort(int arr[], int size)
{
    int minimumIdx;
    for (int i = 0; i < size; i++)
    {
        minimumIdx = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minimumIdx])
            {
                minimumIdx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minimumIdx];
        arr[minimumIdx] = temp;
    }
}

int main()
{
    int array[MAX], size;
    printf("Kac elemanli? ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    selectionSort(array, size);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}