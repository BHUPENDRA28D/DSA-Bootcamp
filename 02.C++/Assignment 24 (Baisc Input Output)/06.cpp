// Define a function to swap data of two int variables using call by reference
#include<iostream>
using namespace std;
void swap(int &a,int &b){
    a= a+b;
    b= a-b;
    a= a-b;

    cout<<" x = "<<a<<" y = "<<b;
}

int main(){
  int  x, y;
  cout << "Enter the value of x and y ::";
  cin >> x >> y;

  swap(x,y);
return 0;
}