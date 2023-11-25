#include <stdio.h>

int main()
{
    int i, j, k;

    for (i = 0; i < 4; i++)
    {
        k = 1;
        for (j = 0; j < 7; j++)
        {
            if (j <= 3 - i || j >= 3 + i)
            {
                printf("%d", k);
                (j < 3 - i) ? k++ : k--;
            }
            else
            {
                printf(" ");
                if (j == 3)
                    k--;
            }
        }
        printf("\n");
    }
    return 0;
}