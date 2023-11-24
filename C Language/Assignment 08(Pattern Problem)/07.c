#include <stdio.h>

int main()
{
    int i, j;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (j == 0 || j == 9 || i == 0 || (j <= 4 - i || j >= 5 + i))
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}