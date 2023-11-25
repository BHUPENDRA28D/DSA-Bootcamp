#include<stdio.h>
float area(int);
int main(){
    int radius;
    printf("Enter the radius of circle:-");
    scanf("%d",&radius);
// Area of circle

    printf("Area of Circle = %f",area(radius));

    return 0;
}
// Function Defination

float area( int r){

  return 3.14*r*r;
}