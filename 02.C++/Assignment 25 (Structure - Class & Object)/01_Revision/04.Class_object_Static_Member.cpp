#include <iostream>
using namespace std;
class Item
{

private:
    int a, b;
    static int k;

public:
    void set_A(int x)
    {
        a = x;
    }
    int get_A()
    {
        return a;
    }
    static void set_k(int z)
    {
        k = z;
    }
    static int get_k()
    {
        return k;
    }
};
int Item::k = 10; // Initializing the static variable to zero.
// Main Function
int main()
{
    Item i1, i2;
    i1.set_A(5);
    Item::set_k(34);
    cout << "\nValue of A in object 1 is :" << i1.get_A();
    // Static variable can be accessed without creating an object.
    cout << "\n Value of K is :" << Item::get_k();

    return 0;
}