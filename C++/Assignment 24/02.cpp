#include<iostream>
using namespace std;
int higest(int a){
    int max=-1;
    while (a)
    {
        if(max < a%10){
            max = a%10;
        }
        a = a/10;
    }
    return max;

    
}

int main(){
    int num;
    cout<<"Enter a number::";
    cin>>num;

    cout<<"Highest digit is = "<<higest(num);
return 0;
}