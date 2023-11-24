/*Define a class Operations, with static member pi with value 3.14. Define following functions.
                a. Overloaded versions of area to calculate area of circle and area of rectangle
                b. Overloaded versions of add to calculate sum of two int values, sum of two float
                   values, concatenate two string
*/
#include <string.h>
#include <iostream>
using namespace std;
class Operations
{
private:
    static float pi;

public:
    Operations() {}
    // Area for circle
    float area(int r)
    {
        return pi * r * r;
    }
    // Area for rectangle
    int area(int l, int b)
    {
        return l * b;
    }
    // Addition
    int add(int a, int b) { return a + b; }
    float add(int a, float b) { return a + b; }
    string add(string str1, string str2)
    {
        return str1 + str2;
    }
};
float Operations::pi = 3.14;
int main()
{

    Operations O1;
    cout << O1.area(5, 6) << endl;
    cout << O1.area(10) << endl;
    cout << O1.add(5, 6) << endl;
    cout << O1.add(6.01f, 5.99f);

    return 0;
}