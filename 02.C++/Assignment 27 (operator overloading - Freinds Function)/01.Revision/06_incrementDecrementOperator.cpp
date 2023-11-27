#include <iostream>
using namespace std;
class Person
{
private:
    int age, rank;

public:
    Person() { cout << "\n Default Constructor Called"; }
    // Parameterised Constructor
    Person(int age, int rank)
    {
        cout << "\nParameterised Constructor Called";
        this->age = age;
        this->rank = rank;
    }
    // Copy Constructor
    Person(Person &p)
    {
        cout << "\nCopy Constructor Called";
        age = p.age;
        rank = p.rank;
    }
    // operator+();
    Person operator+(Person P)
    {
        cout << "\noperator+ called";
        Person temp;
        temp.age = age + P.age;
        temp.rank = rank + P.rank;
        return temp;
    }
    // operator++();  //Pre increment operator.
    Person operator++()
    {
        Person temp;
        temp.age = ++age;
        temp.rank = ++rank;
        return temp;
    }
    // operator++(); //Post increment operator.
    Person operator++(int x) // int x is useless tells diff btw operator
    {
        Person temp;
        temp.age = age++;
        temp.rank = rank++;
        return temp;
    }
    int getAge() { return age; }
    int getRank() { return rank; }

    void display() { cout << "\nPriya age " << getAge() << " and rank is " << getRank() << endl; }

    friend ostream &operator<<(ostream &os, Person P);
};

ostream &operator<<(ostream &os, Person P)
{
    cout << "\n friend Operator<< Called ";
    cout << "\nPriya age " << P.age << " and rank is " << P.rank << endl;
    return os;
}

int main()
{
    Person p1(20, 23), p2, p3;
    p2 = p1; // Copy value of p1 in p2.
    p3 = p1 + p2;

    cout << "\nPr age " << p1.getAge() << " and rank is " << p1.getRank() << endl;
    cout << "Jatin age " << p2.getAge() << " and rank is " << p2.getRank() << endl;
    cout << "Priya age " << p3.getAge() << " and rank is " << p3.getRank() << endl;
    cout << "\n*****************************";
    (++p3).display(); // Pre increment
    (p3++).display(); // Post increment
    p3.display();
    cout << "\n###############################";
    //>>inserstion and exteraction operator.

    // cout << p3; // here cout is a obj of ostream class which is calling operator<<() and passing Person p3 obj in it.
    cout << p3 << p2;
    return 0;
}