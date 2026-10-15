#include <stdio.h>
int main()
{
    /*
     int a = 40;
     int b = 41;

     a > b;
     a < b;
     a >= b;
     a <= b;
     a != b;
     a == b;
     */

    /*
    int a = 40;
    int b = 50;
    int c = 60;
    int d = 70;
    a > c &&c <= d && (a > b || b < d);
    !(a >= d);
     */
    int a, b = 20, c = 30;
    a = b < c ? b : c;
    printf("%d", a);
    return 0;
}
