#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;
class Employe
{
private:
    int empId;
    // string name;
    float salary;

public:
    // Employe() {}
    // Employe(int id, char name[20], float salary)
    // {
    //     this->empId = id;
    //     this->name;
    //     this->salary;
    // }
    void setEmployeeId()
    {
        cin >> empId;
    }

    // void setEmployeeName()
    // {
    //     cin.getline(name, 20);
    // }

    void setEmployeeSalary()
    {
        cin >> salary;
    }

    void showEmploye()
    {
        cout << "Employee ID : " << empId << endl;
        // cout << "Employee Name : " << name << endl;
        cout << "Employee Salary : " << salary << endl;
    }

    float getSalary()
    {
        return salary;
    }
    int getId()
    {
        return empId;
    }
    // string &getName() const
    // {
    //     return name;
    // }
};

int main()
{
    int numEmploye;
    cout << "Enter no. of Employe :- ";
    cin >> numEmploye;

    Employe em1[numEmploye];

    for (int i = 0; i < numEmploye; i++)
    {
        cout << "\nEnter Employee ID : ";
        em1[i].setEmployeeId();

        // cout << "\nEnter Employee Name : ";
        // em1[i].setEmployeeName();

        cout << "\nEnter Employee salary : ";
        em1[i].setEmployeeSalary();
        cin.ignore();
    }

    for (int i = 0; i < numEmploye; i++)
    {
        em1[i].showEmploye();
    }
    return 0;
}