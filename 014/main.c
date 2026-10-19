#include <stdio.h>
int main()
{
    /* int i = 0;
    while (i < 10)
    {
        printf("%d - Merhaba dunya\n", i);
        i++;
    }
    printf("%d - Dongu bitti!", i); */
    int n;
    int factorial = 1;

    printf("Faktoriyel istediginiz sayini giriniz:");
    scanf("%d", &n);
    while (n != 0)
    {
        printf("%d\n", n);
        factorial *= n;
        n--;
    }
    printf("%d", factorial);

    return 0;
}
