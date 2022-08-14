#include<stdio.h>

int main(){
    
    int date,month ,year;
    printf("Enter your Date of birth\n");
    scanf("%d%*c%d%*c%d%*c",&date,&month,&year);
    
    printf("Day - %d, Month - %d, Year - %d",date,month,year);

    return 0;
}