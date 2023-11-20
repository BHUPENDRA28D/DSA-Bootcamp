#include <iostream>
#include <string.h>
using namespace std;
class Student
{
private:
    char name[20];
    int age;
    int rollno;
    int grade;

public:
    Student(char n[20], int x, int y, int z)
    {
        strcpy(name, n);
        age = x;
        rollno = y;
        grade = z;
    }
    void display()
    {
        cout << "\nNAME :: " << name;
        cout << "\nAGE  :: " << age;
        cout << "\nRoll :: " << rollno;
        cout << "\nGRADE:: " << grade;
    }
};

int main()
{
    Student s1("Aayshi", 22, 87, 11), s2("Bhavana", 21, 88, 01), s3("Diksha", 20, 89, 05);
    s1.display();
    s2.display();
    s3.display();

    return 0;
}