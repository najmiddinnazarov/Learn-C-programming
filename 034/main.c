#include <stdio.h>

int max(int *a, int uzunluk)
{
    int maks = a[0];
    for (int i = 1; i < uzunluk; i++)
    {
        if (a[i] > maks)
        {
            maks = a[i];
        }
    }

    return maks;
}

int main()
{
    int sayilar[5] = {1, 23, 55, 100, 101};
    int maks = max(sayilar, 5);
    printf("Sayilar Dizisini en buyuk elamani %d dir.", maks);
    return 0;
}