// Define  function to check whether a given number is a term in a Fibonacci series or not
#include<iostream>
using namespace std;

// fabonacii function
void fabonacii(int a)
{  
    int current =1, old =0, next=0,i;

    while (1)
    {
        next = current+old;
        old =current;
        current =next;

        if(next == a){
            cout<< a <<" is prensent in fabonacii series";
            break;
        }
        if(next>a){
            cout<<a<<" is not present in fabonacii series\n";
            break;
        }
    }


}

int main(){
int x;
cout<<"Enter value of x::";
cin>>x;

fabonacii(x);

return 0;
}