#include <stdio.h>
int main()
{
    int islem;
    int bakiye = 1000;
    int tutar;

    printf("Islemler\n1:para cekme\n2:para yatirma\n3:Havale yapma\n4:Bakiye Sorgulama\n5:Kart iade\n\n\n");
    printf("Islem seciniz:");
    scanf("%d", &islem);

    switch (islem)
    {
    case 1:
        printf("Bakiyeniz: %d\n", bakiye);
        printf("Cekilecek Tutar:");
        scanf("%d", &tutar);
        if (tutar > bakiye)
        {
            printf("Bakiye yetersiz\n");
        }
        bakiye -= tutar;
        printf("Bakiyeniz: %d", bakiye);
        break;
    case 2:
        printf("Bakiyeniz: %d\n", bakiye);
        printf("Yatirelacak Tutar:");
        scanf("%d", &tutar);
        bakiye += tutar;
        printf("Bakiyeniz: %d", bakiye);
        break;
    case 3:
        printf("Bakiyeniz: %d\n", bakiye);
        printf("Havale Yapilacak Tutar:");
        scanf("%d", &tutar);
        if (tutar > bakiye)
        {
            printf("Bakiye yetersiz\n");
        }
        bakiye -= tutar;
        printf("Bakiyeniz: %d", bakiye);
        break;
    case 4:
        printf("Bakiyeniz %d", bakiye);
        break;
    case 5:
        printf("Kart Iade Edildi!\n");
        break;
    default:
        printf("Bilinmeyen islem");
        break;
    }
    return 0;
}
