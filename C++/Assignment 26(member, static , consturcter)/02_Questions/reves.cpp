#include <stdio.h>
#include <stdlib.h>
void input(int *p, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Value of elemetn %d::", i);
        scanf("%d", (p + i));
    }
}

int largest(int *p, int size)
{

    int max = *(p + 0);

    for (int i = 0; i < size; i++)
    {
        if (*(p + i) > max)
        {
            max = *(p + i);
        }
    }
    return max;
}

int main()
{
    int n;
    printf("Enter value of n::");
    scanf("%d", &n);
    int *p = (int *)malloc(n * sizeof(int));
    printf("Value of P is %d\n", p);
    input(p, n);
    printf("Maximum value in array is %d\n", largest(p, n));
    free(p);

    return 0;
}