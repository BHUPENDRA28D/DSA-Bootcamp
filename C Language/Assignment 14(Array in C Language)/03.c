#include <stdio.h>

int main()
{
    int num[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, sumEven = 0, sumOdd = 0;

    for (int i = 0; i < 10; i++)
    {
        if (num[i]%2==0)
            sumEven = sumEven + num[i];
        else
            sumOdd = sumOdd + num[i];
    }
    printf("Sum of even number of array is %d\n", sumEven);
    printf("Sum of odd number of array is %d\n", sumOdd);
    return 0;
}