#include<stdio.h>
int pattern(int x,int y){
    int fact=1,sum=0;
    for(int i=x;i<=y;i++){
        fact=fact*i;
        sum+= (fact/i);
        
    }
    return sum;
}
int main(){
     int start,end;
    printf("Enter value of start and end points::");
    scanf("%d%d",&start,&end);

    printf("Sum = %d",pattern(start,end));
    return 0;
   
}