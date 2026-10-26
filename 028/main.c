#include <stdio.h>

/* int carpi_sayi(int arr[], int size)
{
    int sayi_carpimi = 1;
    for (int i = 0; i < size; i++)
    {
        sayi_carpimi *= arr[i];
    }
    return sayi_carpimi;
}
int main()
{
    int sayilar[5] = {1, 2, 3, 4, 5};
    printf("%d", carpi_sayi(sayilar, 5));
    return 0;
} */

void bastir(int matris[][4], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", matris[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int matris[3][4];
    printf("Matrisi doldurunuz:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {

            printf("Sayi girin:");
            scanf("%d", &matris[i][j]);
        }
    }
    bastir(matris, 3);
    return 0;
}