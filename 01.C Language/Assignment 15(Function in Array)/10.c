//Should be done using Hash Map 
#include <stdio.h>

int main()
{
    int a[8] = {10, 3, 8, 12, 3, 6, 3, 12}, count;

    for (int i = 0; i < 8; i++)
    {
        count = 0;

        for (int j = 0; j < 8+1; j++)
        {
            while (i != j)
                if (a[i] == a[j])
                    count++;
        }
        printf("\nElement at %d----->> %d freq = %d", i, a[i], count + 1);
    }

    return 0;
}