#include<stdio.h>
#include<stdlib.h>

int main(){
    int *p = (int*)malloc(sizeof(int ));
    *p = 10;

    printf("\n Variable Before Memory Leak %d\n",*p);

    *p= NULL;
    printf("\n Variable After Memory Leak %d\n",*p);
    return 0;
}