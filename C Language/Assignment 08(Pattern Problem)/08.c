#include <stdio.h>

int main()
{
    int i, j, k = 1, n = 1;
    for (i = 0; i < 4; i++)
    {
        n = 1;

        for (j = 0; j < 7; j++)

        {
            if ((j >= 3 - i) && (j <= 3 + i))

            {

                printf("%d", n);

                (j < 3) ? n++ : n--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}