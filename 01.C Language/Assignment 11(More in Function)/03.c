#include<stdio.h>
void prime(int x){
    int flag=0;
    for(int i=2;i<=x/2;i++){
        if(x%i==0){
            flag=1;
        }  
    }
    (flag==0)?printf("%d = PRIME NUMBER\n",x) :printf("%d = NOT PRIME NUMBER\n",x);
}

int main(){
    int num;
    printf("Enter value of num::");
    scanf("%d",&num);
    prime(num);
    return 0;
}