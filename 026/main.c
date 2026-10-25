#include <stdio.h>
/* int topla(int sayi1, int sayi2)
{
    return sayi1 + sayi2;
}
void hatayibas(int hata)
{
    printf("Hata Kodu %d", hata);
}

int main()
{
    int sayi1;
    int sayi2;
    int toplam;
    scanf("%d %d", &sayi1, &sayi2);
    toplam = topla(sayi1, sayi2);
    printf("%d", toplam);
    return 0;
}
 */

int factorial(int sayi)
{
    int fact = 1;
    for (int i = sayi; i > 0; i--)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int n;
    printf("Lutfen faktoriyel istediginiz sayini giriniz:");
    scanf("%d", &n);
    printf("Faktoriyel :%d", factorial(n));
    return 0;
}