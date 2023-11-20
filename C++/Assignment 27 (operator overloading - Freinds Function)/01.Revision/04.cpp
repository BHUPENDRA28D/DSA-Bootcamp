#include <iostream>
using namespace std;
class Item
{
private:
    int a, b;

public:
    Item(){};
    Item(int x, int y) { a = x, b = y; }
    void display() { cout << "(" << a << "," << b << ")" << endl; }
    friend int product(Item);
};
int product(Item i)
{
    return (i.a * i.b);
}
int main()
{
    Item item1(2, 3), item2(4, 5);
    item1.display();
    item2.display();
    cout << "Product = " << product(item1) << endl;
    cout << "Product = " << product(item2) << endl;

    return 0;
}