// sum of n even and n odd  numbers by formula
// sum = n*(n+1)/2
#include <iostream>
using namespace std;

int main()
{
    int n, sumEven = 0, sumOdd = 0;
    cout << "Enter the number of elements: ";
    cin >> n;
    sumEven = n * (n + 1);
    cout << endl
         << "sum of n even number = " << sumEven;

    sumOdd = n * n;

    cout << endl
         << "sum of n odd number = " << sumOdd;

    return 0;
}