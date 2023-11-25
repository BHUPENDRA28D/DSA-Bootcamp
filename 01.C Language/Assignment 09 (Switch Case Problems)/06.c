#include <stdio.h>

int main()
{
    int year;
    printf("Enter a year\n");
    scanf("%d", &year);

    switch (year%100==0)
    {
       
        case 1:switch (year%400 == 0)
        {
             case 1:printf("Leap Year\n");break;
             
             case 0:printf("Not Leap Year\n");break;
             
        }
        break;
       
       case 0:switch (year%4==0)
        {
             case 1:printf("Leap Year\n"); break;
            
             case 0:printf("Not Leap Year\n");break;
             
        }
        break;
    }
    return 0;
}