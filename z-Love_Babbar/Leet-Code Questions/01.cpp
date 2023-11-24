// sum of n numbers by formula
// sum = n*(n+1)/2
#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter the number of elements: ";
    cin >> n;
    sum = n * (n + 1) / 2;
    cout << endl
         << "sum = " << sum;

    return 0;
}