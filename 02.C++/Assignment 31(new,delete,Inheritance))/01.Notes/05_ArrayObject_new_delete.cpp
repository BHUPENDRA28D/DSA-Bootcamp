#include <iostream>
using namespace std;
class Shop
{
private:
    int id;
    float price;

public:
    void setData(int i, float price)
    {
        this->id = i;
        this->price = price;
    }
    void getData()
    {
        cout << "ID :" << id << endl;
        cout << "Price :" << price << endl;
    }
};

int main()
{
    Shop *ptr = new Shop[5];
    Shop *ptrTemp = ptr;
    for (int i = 0; i < 5; i++)
    {
        int p;
        float q;
        cout << "Enter id and price of " << i << endl;
        cin >> p >> q;
        // (*ptr).setData(p,q);
        ptr->setData(p, q);
        ptrTemp++;
    }
    for (int i = 0; i < 3; i++)
    {
        cout << "\n ____________\n";
        cout << "Item No. - " << i + 1 << endl;
        ptr->getData();
        cout << "\n ____________\n";
        ptrTemp++;
    }
    return 0;
}