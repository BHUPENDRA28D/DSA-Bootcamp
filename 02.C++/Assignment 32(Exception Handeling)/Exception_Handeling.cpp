#include <iostream>
using namespace std;

int main()
{
    try
    {
        int a, b;
        cout << "Enter a and b " << endl;
        cin >> a >> b;
        if (b == 0)
            throw 1; // throw keep word throws and error message. It is used to stop the program execution when an
        // cout << "Division by zero is not possible";

        int c = a / b;
        cout << "Reult  = " << c;
    }
    catch (int e)
    {
        cout << "\n Runtime error";
    }

    cout << endl
         << "Addition of two numbers 10 and 20 is  = " << 10 + 20;

    return 0;
}