#include<stdio.h>
int naturalNumber(int);
int main(){
     int num;
     printf("Enter random number:-");
     scanf("%d",&num);
     
     naturalNumber( num);

    return 0;

}

int naturalNumber(int n){
    for(int i=1;i<=n; i++){
        
        printf("%d ",2*i -1);
    }
}