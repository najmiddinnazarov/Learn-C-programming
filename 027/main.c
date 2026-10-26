#include <stdio.h>

int asal_mi(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int sayi;
    printf("Lutfen sayi girin:");
    scanf("%d", &sayi);
    printf("%d\n", asal_mi(sayi));
    if (asal_mi(sayi))
    {
        printf("Bu sayi Asaldir.");
    }
    else
    {
        printf("Bu sayi Asal degildir.");
    }
    return 0;
}