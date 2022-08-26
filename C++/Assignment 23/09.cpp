#include<iostream>
using namespace std;
void swap(int p,int q){

    p= p+q;
    q=p-q;
    p= p-q;
    cout<<"a = "<<p<<"\nb = "<<q;
}

int main(){

int a,b;

cout<<"Enter value of a and b";
cin>>a>>b;
swap(a,b);
return 0;
}