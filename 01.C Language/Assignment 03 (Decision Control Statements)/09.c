#include <stdio.h>

int main()
{
    int a, b, c, gt=0;
    printf("Enter a b and c::");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b && a > c)
    {
      gt =a;
        
    }
    else if (b > c)
    {
        gt=b;
        
    }
    else
    {
        gt= c;
        
    }

    if ((gt==a && gt==b) || (gt==b && gt==c) ||(gt==a && gt==c))
    {
        printf("%d", gt);
    }

    return 0;
}