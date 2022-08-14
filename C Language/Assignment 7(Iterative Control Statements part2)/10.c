#include <stdio.h>
int main()
{
    int i, r, sum = 0, temp;

    
    
    for(i=1;i<=1000;i++){
        
    temp = i;
    while (i != 0)
    {
        r = i % 10;
        sum = sum + (r * r * r);
        i=  i/ 10;
    }
    if (temp == sum)
        printf("%d ",i);
    }


    return 0;
}