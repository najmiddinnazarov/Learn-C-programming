#include <stdio.h>

struct Ogrenci
{
    char isim[15];
    char soyisim[20];
    int numara;
};

void goster(struct Ogrenci a)
{
    printf("Ogrencinini bilgileri: %s %s %d", a.isim, a.soyisim, a.numara);
}
struct Ogrenci degerAl()
{
    struct Ogrenci yeni;
    printf("Bilgilerini girin:");
    scanf("%s %s %d", &yeni.isim, &yeni.soyisim, &yeni.numara);
    return yeni;
}

int main()
{
    struct Ogrenci ogrenci1 = degerAl();
    goster(ogrenci1);
    return 0;
}