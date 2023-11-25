#include<iostream>
using namespace std;

// Example of Inline Function and Defualt Arrgument
inline int  multi(int  a,int  b){
    return a*b;
}

//  Defualt Arrgument 
int add(int,int=0,int=0);
int main(){
int  a,b;
cout<<"Enter the value of a and b ::";
cin>>a>>b;

int c;
cout<<"Enter 3rd value c::";
cin>>a>>b>>c;

cout<<endl;

cout<<"Result = "<<multi(a,b)<<endl;
cout<<"Sum = "<<add(a,b,c)<<endl;
return 0;
}

int add(int x,int y,int z){
    
    return x+y+z;


}