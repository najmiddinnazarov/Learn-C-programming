#include <stdio.h>
int main()
{
    int matris[3][5];
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &matris[i][j]);
        }
    }

    /* for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", matris[i][j]);
        }
        printf("\n");
    } */

    for (int j = 0; j < 5; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            sum += matris[i][j];
        }
        printf("%d ", sum);
        sum = 0;
    }

    return 0;
}
