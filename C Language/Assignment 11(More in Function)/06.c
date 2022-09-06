#include<stdio.h>
void prime(int a,int b){
    int flag=0;
    if(a=1)
      a=a+1;

    for(int j= a;j<=b;j++){
        flag=0;

        for(int i=2;i<=j/2;i++){
            if(j%i==0)
            flag=1;
        }
        
        if(flag==0){
            printf("%d ",j);
        }
    }
    }
    

int main(){
    int a,b;
    printf("Enter value of a and b::");
    scanf("%d%d",&a,&b);
    prime(a,b);
    return 0;
}