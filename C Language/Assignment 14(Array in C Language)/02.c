#include <stdio.h>

int main()
{

    int arr[10], sum = 0;
    float avg;
    // printf("Enter the number of Student::");
    // scanf("%d\n",&n);

    for (int i = 0; i < 10; i++)
    {
        printf("Enter value of element %d::", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        sum = sum + arr[i];
    }
    avg = sum / 10;
    printf("The average is %.2f", avg);

    return 0;
}