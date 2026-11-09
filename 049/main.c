#include <stdio.h>
#include <string.h>

int main()
{
    char veri[25] = "Yazilim Bilimi";
    int uzunluk = strlen(veri);

    FILE *filep = fopen("yazilimbilimi.txt", "w");

    if (filep == NULL)
    {
        printf("Dosya olusturulamadi!");
    }
    else
    {
        for (int i = 0; i < uzunluk; i++)
        {
            fputc(veri[i], filep);
            printf("Yazilan Karakter %c\n", veri[i]);
        }
        printf("Dosya Basiriyla Yazildi!");
        fclose(filep);
    }

    return 0;
}