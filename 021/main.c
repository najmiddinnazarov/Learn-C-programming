#include <stdio.h>
int main()
{
    float toplam = 0.0;
    float sayilar[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Bir sayi giriniz:");
        scanf("%f", &sayilar[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        toplam += sayilar[i];
    }
    printf("Girdiginiz sayilar toplami ortalamasi: %.2f:", toplam / 5);

    return 0;
}
