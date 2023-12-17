#include <iostream>
#include <math.h>
using namespace std;
void input(int x, int y, int z)
{
    cout << "Input the value of " << x << ":" << endl;
    cin >> x;
    cout << "Input the value of " << y << ":" << endl;
    cin >> y;
    cout << "Input the value of " << z << ":" << endl;
    cin >> z;
    cout << endl;
}

int main()
{
    int a, b, c;
    float root1, root2;
    input(a, b, c);
    int d = (b * b - 4 * a * c);
    cout << endl
         << "Quadratic Equation Roots: \n";
    if (d > 0)
    {
        cout << "Roots are imaginary " << endl;
        root1 = -b * (2 * a);
        root2 = root1;
    }
    else if (d == 0)
    {
        cout << "Roots are Equal " << endl;
        root1 = root2 = -b / (2 * a);
    }
    else
    {
        cout << "Roots are real " << endl;
        root1 = -b + (sqrt(d)) / 2 * a;
        root2 = -b - (sqrt(d)) / 2 * a;
    }

    cout << "Root 1 = " << root1 << endl;
    cout << "Root 2 = " << root2 << endl;

    return 0;
}