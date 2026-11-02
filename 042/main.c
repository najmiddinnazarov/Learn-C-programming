#include <stdio.h>

struct Araba
{
    int tekerlekSayisi;
    int vitesSayisi;
    int model;
    float motor;
    int beygir;
} araba1, araba2;

int main()
{
    /*  araba1 = (struct Araba){
         0}; */
    araba1 = (struct Araba){
        4,
        6,
        2011,
        3.00, 300};
    araba2 = araba1;

    printf("%d, %d, %d, %.2f, %d", araba1.tekerlekSayisi, araba1.vitesSayisi, araba1.model, araba1.motor, araba1.beygir);
    printf("\n");
    printf("%d, %d, %d, %.2f, %d", araba2.tekerlekSayisi, araba2.vitesSayisi, araba2.model, araba2.motor, araba2.beygir);
    return 0;
}