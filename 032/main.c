#include <stdio.h>

void degerdegistirir(int a, int b)
{
    int gecici = a;

    a = b;

    b = gecici;

    printf("a:%d b:%d\n", a, b);
}

int main()
{
    int x = 5, y = 10;
    degerdegistirir(x, y);
    printf("x:%d y:%d", x, y);
    return 0;
}