#include <stdio.h>

void hatayibas(int hata)
{
    printf("Hata Kodu %d", hata);
}

int main()
{
    int sayi;
    printf("Lutfen negatif olmayan sayi girin:");
    scanf("%d", &sayi);

    if (sayi < 0)
    {
        hatayibas(404);
    }
    else
    {
        printf("Tebrikler!");
    }
    return 0;
}
