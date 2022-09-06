#include <stdio.h>
void prime(int x)
{
    int flag = 0;
    while (x)
    {
        flag = 0;

        for (int i = 2; i <= x / 2; i++)
        {
            if (x % i == 0)
            {
                flag = 1;
            }
        }
        if (flag == 0)
        {
            printf("%d ", x);
            break;
        }
        x++;
    }
}

int main()
{
    int num;
    printf("Enter value of num::");
    scanf("%d", &num);
    prime(num);
    return 0;
}