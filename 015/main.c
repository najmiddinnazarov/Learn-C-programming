#include <stdio.h>
int main()
{
    // 1234 sayiyi rakamlar toplami ve kac hane oldugunu
    int n, toplam = 0, hane = 0;
    printf("Sayiyi giriniz:");
    scanf("%d", &n);
    do
    {
        toplam += n % 10;
        hane++;
        n = n / 10;
    } while (n > 0);
    printf("Rakamlar toplami - %d ve %d - haneli", toplam, hane);

    return 0;
}
