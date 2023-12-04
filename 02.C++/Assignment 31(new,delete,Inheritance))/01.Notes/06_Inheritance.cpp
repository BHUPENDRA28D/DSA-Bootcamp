#include <iostream>
#include <string.h>
using namespace std;
class Person
{
private:
    int age;
    char name[20];

protected:
    void setAge(int age) { this->age = age; }

    void setName(char name[]) { strcpy(this->name, name); }

public:
    int getAge() { return age; }
    const char *getName() { return name; }
    void showData()
    {
        cout << "\nAge:" << getAge() << endl;
        cout << "Name :" << getName() << endl;
    }
};

// Inheritaed class
class Employee : public Person // User 2
{
private:
    float salary;

public:
    // user 2 is writting this code.
    void setEmployee(int a, char n[], float salary)
    {
        a = 21;
        setAge(a);
        setName(n);
        this->salary = salary;
    }
    void showData()
    {
        cout << "\nName :" << getName() << endl;
        cout << "Age:" << getAge() << endl;
        cout << "Salary :" << salary << endl;
    }
};

int main() // user 1
{
    Person P1;
    // P1.setName("bhupendra");
    // P1.showData();
    Employee e1;
    e1.setEmployee(21, "Bhupendra", 45678.92);
    e1.showData();

    return 0;
}