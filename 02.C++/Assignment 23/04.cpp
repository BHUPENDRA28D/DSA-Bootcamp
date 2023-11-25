#include<iostream>
using namespace std;
float area(int *r){
    return (3.14*(*r)*(*r));
}
int main(){
    int radius;
    cout<<"Enter radius of circle::";
    cin>>radius;
    cout<<"Area of circle is "<<area(&radius);

return 0;
}