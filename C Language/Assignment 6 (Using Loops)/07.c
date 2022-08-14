#include<stdio.h>

int main(){
    int n,count=0;

    printf("Enter value of n:-");
    scanf("%d",&n);

    if (n==0)
    {
       printf("Number of digits in numbers is 1");
   
    }else{
    while (n!=0)
    {
        n= n/10;
        count++;
    }
    
    printf("Number of digits in numbers is %d",count);}
    return 0;
}
// can be made by flag variable--------