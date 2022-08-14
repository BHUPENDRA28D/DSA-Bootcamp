#include<stdio.h>
int SimpleIntrest(int , int ,float);
int amount(int ,int );
int main(){
    int SI, principle,time;
    float rate;

    printf("\nEnter value of principle :-");
    scanf("%d",&principle);

    printf("\nEnter value of time :-");
    scanf("%d",&time);

    printf("\nEnter value of rate :-");
    scanf("%f",&rate);

    SI = SimpleIntrest(principle,time,rate);

    printf("\n-------The Simple Intrest = %d------",SI);
    printf("\n-------The Total Amount = %d------",amount(SI,principle));
    return 0;
}
int SimpleIntrest(int p ,int t, float r){

    return(  (p*r*t)/100);

}

int amount(int si,int p){
    return p+si;
}