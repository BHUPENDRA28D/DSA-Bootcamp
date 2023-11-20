#include <iostream>
using namespace ::std;
class StaticCount
{

private:
    static int counter;

public:
    static void incrementCounter()
    {
        ++counter;
    }
    static void display()
    {
        cout << "No. of Counter = " << counter << endl;
    }
};
int StaticCount::counter = 0; // Initializing the static member variable to 0

int main()
{ // Calling by class not object;
    StaticCount::incrementCounter();
    StaticCount::incrementCounter();
    StaticCount::incrementCounter();
    StaticCount::display();

    return 0;
}