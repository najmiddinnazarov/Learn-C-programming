#include <stdio.h>

struct Students
{
    char isim[15];
    char soyIsim[15];

    int numara;
    int yas;
};

int main()
{
    struct Students ahmet = {"Ahmet", "Gedikli", 135, 34};
    printf("%s %s %d %d", ahmet.isim, ahmet.soyIsim, ahmet.numara, ahmet.yas);
    return 0;
}