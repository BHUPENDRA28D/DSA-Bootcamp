#include <stdio.h>
void primeFact(int);
int main()
{
    int num;
    printf("Enter value of num:");
    scanf("%d", &num);
    primeFact(num);
    return 0;
}
void primeFact(int num)
{

    for (int i = 2; num != 0; i++)
    {
        while (num % i == 0)
        {   num=num/i;
            printf("%d ",i);
        }
    }
}