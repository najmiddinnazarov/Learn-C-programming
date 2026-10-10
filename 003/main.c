#include <stdio.h>

int main()
{
    int x1 = 10;
    int x2 = -3;

    printf("%d\n", x1 + x2);
    printf("%d\n", x1 - x2);
    printf("%d\n", x1 * x2);
    printf("%f.1\n", x1 / x2);
    printf("%d\n", x1 % x2);

    printf("%d\n", -x1);
    printf("%d\n", -x2);
    return 0;
}