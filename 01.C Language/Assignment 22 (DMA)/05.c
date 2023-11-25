#include <stdio.h>
#include <stdlib.h>
void input(int *p, int size)
    {
    for (int i = 0; i < size; i++)
    {
        printf("Value of elemetn %d::", i);
        scanf("%d", (p + i));
    }}

    int sum(int *q, int size)
    {
        int sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum += *(q + i);
        }
        return sum;
    }

    int main()
    {
        int n;
        printf("Enter value of n::");
        scanf("%d", &n);
        int *p = (int *)malloc(n * sizeof(int));
        input(p, n);
        printf("Sum = %d ", sum(p, n));

        return 0;
    }