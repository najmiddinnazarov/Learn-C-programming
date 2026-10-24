#include <stdio.h>
int main()
{
    // int matris[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matris[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matris[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matris[i][j]);
        }
        printf("\n");
    }

    return 0;
}
