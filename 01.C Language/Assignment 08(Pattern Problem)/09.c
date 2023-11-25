#include <iostream>
using namespace std;

int main()
{
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        k = 1;
        for (j = 0; j < 7; j++)
        {
            if (j >= i && j <= 6 - i)
            {
                printf("%d", k);

                (j < 3) ? k++ : k--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}