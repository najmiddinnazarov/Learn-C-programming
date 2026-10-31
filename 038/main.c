#include <stdio.h>
#define MAX 50

void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 1; j < size - i; j++)
        {
            if (arr[j - 1] > arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
            {
            }
        }
    }
};
int main()
{
    int array[MAX], size;
    printf("Kac elemanli?");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    bubbleSort(array, size);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}