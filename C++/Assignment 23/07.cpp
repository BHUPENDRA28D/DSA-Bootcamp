#include <iostream>
using namespace std;

float squre(int *l)
{
    return (*l * *l);
}
int main()
{
    int num;
    cout << "Enter num::";
    cin >>num;

    cout << "Squre of number = " << squre(&num);

    return 0;
}