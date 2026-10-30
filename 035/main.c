#include <stdio.h>

int benimstrlen(char *p)
{
    int uzunluk = 0;

    for (int i = 0; p[i] != '\0'; i++)
    {
        uzunluk++;
    }

    return uzunluk;
}

int main()
{
    char yazi[] = "turav";
    printf("%d", benimstrlen(yazi));
    return 0;
}