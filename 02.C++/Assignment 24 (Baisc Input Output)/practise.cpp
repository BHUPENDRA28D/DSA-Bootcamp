#include<iostream>
using namespace std;
class Time
{
private:
    int a,b;
public:
     void input(){
        // int a,b;
        cout<<"Enter hours::"<<a;
        cin>>a;
        cout<<"\nEnter Minutes::"<<b;
        cin>>b;

     }
     
     void showData(){
        // int a,b;
        cout<<a<<"::"<<b;
     }
};


int main(){
Time t1, t2;
t1.input();
t1.showData();
return 0;
}