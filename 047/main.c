#include <stdio.h>
#include <string.h>

struct Ogrenci
{
    char isim[20];
    char soyisim[20];
    int numara;
};

struct Ogrenci *degerAl(struct Ogrenci *p)
{
    strcpy(p->isim, "Mehmet");
    strcpy(p->soyisim, "Gencol");
    p->numara = 123;

    return p;
}

void goster(struct Ogrenci *p)
{
    printf("Ogrencinin Bilgileri\nIsim:%s\nSoyisim:%s\nNumara:%d", p->isim, p->soyisim, p->numara);
}

int main()
{
    struct Ogrenci *tut;
    struct Ogrenci ogrenci1 = {"Ahmet", "Gedikli", 505};
    tut = degerAl(&ogrenci1);
    printf("%s %s %d", tut->isim, tut->soyisim, tut->numara);
    return 0;
}