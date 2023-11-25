#include<iostream>
using namespace std;
float volume(int *l, int *b, int *h){
    return (*l * *b * *h);

}
int main(){
    int l,b,h;
    cout<<"Enter l ,b,h::";
    cin>>l>>b>>h;

    cout<<"Voulme of cuboid = "<<volume(&l,&b,&h);

return 0;
}