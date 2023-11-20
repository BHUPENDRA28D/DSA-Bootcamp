// #include <iostream>
// // This Question can be done by static variable and constructor also.

// using namespace std;
// class Counter
// {
// private:
//     int counter;

// public:
//     // constructor
//     Counter() { counter = 0; }
//     void incrementCounter()
//     {
//         counter++;
//     }
//     int getCounter()
//     {
//         return counter;
//     }
// };
// // int Counter::counter = 0;

// int main()
// {
//     Counter c1, c2, c3;
//     c1.incrementCounter();
//     c2.incrementCounter();
//     c3.incrementCounter();
//     cout << "Value of counter in object c1 is :" << c1.getCounter() << endl;
//     cout << "Value of counter in object c1 is :" << c2.getCounter() << endl;
//     cout << "Value of counter in object c1 is :" << c3.getCounter() << endl;

//     return 0;
// }
#include <iostream>
// This Question can be done by static variable and constructor also.

using namespace std;
class Counter
{
private:
    static int counter;

public:
    // constructor
    Counter() { counter++; }

    int getCounter()
    {
        return counter;
    }
};
int Counter::counter = 0;

int main()
{
    Counter c1, c2, c3;

    cout << "Value of counter in object c1 is :" << c1.getCounter() << endl;

    return 0;
}