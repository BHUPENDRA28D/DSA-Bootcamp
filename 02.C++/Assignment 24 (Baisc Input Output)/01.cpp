// Define a function to check whether a given number is a Prime number or not.
#include<iostream>
using namespace std;

int prime(int a){
    for (int i =2; i<=a/2;i++){
        if(a%i==0)
         return 1;
    }
    return 0;
}

int main(){
    int num;
    cout<<"Enter a number::";
    cin>>num;

    if(prime(num)==1)
        cout<<num<<" is not Prime Number";

    else    
        cout<<num<<" is Prime Number";

    return 0;
}