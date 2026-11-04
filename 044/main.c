#include <stdio.h>

struct Ogrenci
{
    char isim[15];
    char soyisim[20];
    int numara;
};

int main()
{
    struct Ogrenci ogrenciler[3];

    for (int i = 0; i < 3; i++)
    {
        printf("%d nci ogrenci isim soyisim ve numara giriniz: ", i + 1);

        scanf("%s %s %d",
              &ogrenciler[i].isim,
              &ogrenciler[i].soyisim,
              &ogrenciler[i].numara);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d nci ogrenci hakkinda bilgiler %s %s %d \n",
               i + 1,
               ogrenciler[i].isim,
               ogrenciler[i].soyisim,
               ogrenciler[i].numara);
    }

    return 0;
}