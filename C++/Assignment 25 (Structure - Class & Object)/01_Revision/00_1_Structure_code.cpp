#include <iostream>
#include <string.h>
using namespace std;
struct Book
{
    int bookid;
    char name[20];
    float price;

    // Function can be defined in structure of c++.
    void display()
    {
        cout << "Book ID: " << bookid << "\nName :" << name << "\nPrice:" << price << endl;
    }
};
// struct Book input();
// void display(struct Book);
int main()
{
    struct Book b1 = {1, "Java", 120.4}; // In C++ we can
    Book b2, b3;
    b2.bookid = 2;
    strcpy(b2.name, "C++");
    b2.price = 89.5;
    b3 = input();
    b3.display();

    return 0;
}
struct Book input()
{
    // writing truct is optional in C++
    Book b;
    cout << "Enter the details of a new book" << endl;
    cout << "Enter id of Book :- ";
    cin >> b.bookid;
    cin.ignore(); // ignore is to empty the buffer smae function as fflush in c.
    cout << "Enter Name of Book:- ";
    cin.getline(b.name, 20); // getline is same as fgets which input string.
    cout << "Enter Price of Book:- ";
    cin >> b.price;
    return b;
}
// void display(struct Book b)
// {
//     cout << " " << b.bookid << " " << b.name << " " << b.price << endl;
// }