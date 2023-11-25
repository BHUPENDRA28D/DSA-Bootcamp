#include <stdio.h>
int main()
{
    int i;
    printf("NUmber should be between 1 and 12\nEnter the number for specific month :");
    scanf("%d", &i);

    if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
    {
        printf("Month %d have 31 days\n", i);
        
    }
    else if (i == 4 || i == 6 || i == 9 || i == 11)
    {
        printf("Month %d have 30 days\n", i);
        
    }
    else if (i == 2)
    {
        printf("Month %d have either 28 days or 29 days\n", i);
    }
    else
     printf("Month %d is invalide value of i",i);

    return 0;
}