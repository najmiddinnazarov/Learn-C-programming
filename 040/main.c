#include <stdio.h>
#define MAX 50

void insertionSort(int arr[], int size)
{
    int element;
    for (int i = 1; i < size; i++)
    {
        element = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > element)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = element;
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
    insertionSort(array, size);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}