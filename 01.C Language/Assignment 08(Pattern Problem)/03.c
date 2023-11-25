#include <stdio.h>

int main()
{
    int i, j, k, l;
    printf("Enter l: ");
    scanf("%d", &l);

    for (i = 1; i <= l; i++)
    {
        for (j = 1; j <= l; j++)
        {
            if (j <= l + 1 - i)
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