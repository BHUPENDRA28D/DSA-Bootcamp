#include <iostream>
#include <string.h>
using namespace std;
class Person
{
private:
    int age;
    char name[20];

protected:
    void setAge(int a) { age = a; }
    void setName(char n[]) { strcpy(name, n); }

public:
    int getAge() { return age; }
    char *getName() { return name; }
};
class Employee : public Person // user 2 - can use  protected member of Person.
{
private:
    float salary;

public:
    void setEmployee(int a, char n[], float s)
    {
        setAge(a);
        setName(n);
        salary = s;
    }
};
int main() // user1
{
    Employee e;
    e.setEmployee(23, "Ravi Jha", 3400000);
    cout << "Age = " << e.getAge() << endl;
    cout << "Name = " << e.getName() << endl;
    return 0;
}