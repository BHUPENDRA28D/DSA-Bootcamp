#include<stdio.h>

int main(){
    int a,b,i,hcf=1;

    
    printf("enter two numbers:- ");
    scanf("%d%d",&a,&b);

    int min = a<b ? a:b;
    for ( i = 1; i<=min; i++)
    {
        if (a%i==0 && b%i==0)
        {
            hcf = i;

        }
        
    }
    if(hcf==1)
     printf("\n%d and %d are Co-Prime Number",a,b);

     else
     printf("\n%d and %d are not  Co-Prime Number",a,b);
    
    return 0;
}