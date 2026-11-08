#include <stdio.h>

int main()
{
    FILE *filep = fopen("yazilimbilimi.txt", "r");

    if (filep == NULL)
    {
        // printf("Dosya olusturulamadi!"); "w" icin
        printf("Oyle bir dosya yok!");
    }
    else
    {
        // printf("Dosya olusturuldu!"); "w" icin
        printf("Dosya var!");
    }
    return 0;
}