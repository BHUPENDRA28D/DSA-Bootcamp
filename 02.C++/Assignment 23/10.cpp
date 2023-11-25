#include<iostream>
using namespace std;

int main(){
    int arr[10],sum=0;
    for (int i = 0; i < 10; i++)
    {
        cout<<"Enter value of index" <<i<<"::";
        cin>>arr[i];
        sum+= arr[i];
    }
    
    cout<<"Sum = "<<sum;
return 0;
}