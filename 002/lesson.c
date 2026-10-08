#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* char kitapadi[20] = "Mufettis";
    char kitapyazar[10] = "Gogol";
    printf("%s\n", kitapadi);
    printf("%s", kitapyazar); */
    /* char kitaptur[15] = "Tiyatro Kitabi";
    printf("Kitapturu: %s", kitaptur); */
    char kitapad[25] = "Avucunuzda ki Kelebek";
    char yazar[30] = "Ahmet Serif izgoren";
    char turu[10] = "Hikaye";
    char sayfa[4] = "124";
    char basimyil[5] = "2001";

    printf("******** Kitap Tanitim ********\n\n");
    printf("Kitapad: %s - KitapYazar: %s\n", kitapad, yazar);
    printf("Turu: %s\n", turu);
    printf("Sayfa Sayisi: %s\n", sayfa);
    printf("Basim Yili: %s", basimyil);
    return 0;
}