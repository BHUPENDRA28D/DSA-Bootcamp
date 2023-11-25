#include<stdio.h>

int main(){
    int n;
    printf("Enter a number::");
    scanf("%d",&n);

    for(int i =n; i>=1; i--)
        printf("%d\n",2*i);

    return 0;
}