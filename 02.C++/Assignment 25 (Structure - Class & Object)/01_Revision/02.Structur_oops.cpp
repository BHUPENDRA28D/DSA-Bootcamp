#include <iostream>
using namespace std;
struct Book
{
private:
    int bookid;
    char name[20];
    float price;

public:
    void display()
    {
        cout << "Book ID: " << bookid << "\nName :" << name << "\nPrice:" << price << endl;
    }

    void input()
    {
        cout << "Enter the book id:";
        cin >> bookid;
        if (bookid < 0)
            bookid = -bookid;
        cin.ignore();
        cout << "Enter the book name:";
        cin.getline(name, 20);
        cout << "Enter the price of the book:";
        cin >> price;
    }
    float changePrice()
    {
        // Assuming you want to increase the price by 40
        price = price + 40;
        return price;
    }
};

int main()
{
    struct Book b1, b2, b3;
    b1.input();
    b2.input();
    b3.input();

    b1.display();
    b2.display();
    b3.display();
    cout << endl;

    b3.changePrice();
    b3.display();

    return 0;
}