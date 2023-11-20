#include <iostream>
using namespace std;
class Bill
{
private:
    char name[20];
    int customer_id;
    float unit_used;

public:
    void get()
    {
        cout << "\nEnter Name of Customer :- ";
        cin.getline(name, 20);

        cout << "\nEnter ID of Customer :-  ";
        cin >> customer_id;
        cin.ignore();
        cout << "\nEnter Unit Used by Customer :-  ";
        cin >> unit_used;
        cin.ignore();
    }
    void getBill()
    {
        cout << "\nName : " << name << endl;
        cout << "Customer Id : " << customer_id << endl;
        cout << "Unit used : " << unit_used << endl;
        cout << "Bill ::  ₹ " << calBill() << endl;
    }

    float calBill()
    {
        if (unit_used > 0 && unit_used < 100)
            return (1.20 * unit_used);
        else if (unit_used >= 100 && unit_used <= 200)
            return (2 * unit_used);
        else
            return (3 * unit_used);
    }
};
int main()
{
    Bill b1, b2;
    b1.get();
    b2.get();
    b1.getBill();
    b2.getBill();

    return 0;
}