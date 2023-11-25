#include<stdio.h>
int HCF(int x, int y){
    int n,hcf=1;
    if(x>y){
        n=y;
    }
    else
        n=x;

    for(int i=1;i<=n;i++){

        if(x%i==0 && y%i==0){
            hcf =i;
        }

    }
    return hcf;
}

int main(){
    int a,b;
    printf("Enter value of a and b::");
    scanf("%d%d",&a,&b);
    printf("HCF = %d",HCF(a,b));
    return 0;
}