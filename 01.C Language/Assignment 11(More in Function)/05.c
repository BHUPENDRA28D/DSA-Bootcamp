#include<stdio.h>
void prime(int n){
int i,j,flag=0,count=0;

for(j=2;1;j++){
    flag=0;

    for(i=2;i<=j/2;i++){
        if(j%i==0)
            flag=1;
        }

    if(flag==0){
            printf("%d ",j);
            count++;
        }
    if(count==n){
            break;
        }
    }
}

int main(){
    int num;
    printf("Enter value of num::");
    scanf("%d",&num);
    prime(num);
    return 0;
}