#include <iostream>
using namespace std;
class Bank
{
private:
    int principle, rate, time;

public:
    Bank(int p, int r, int t) : principle(p), rate(r), time(t) {}

    void display()
    {
        cout << "Principle = " << principle << endl;
        cout << "Rate = " << rate << "%" << endl;
        cout << "Time = " << time << " years " << endl;
        cout << "Simple Intrest on it is =  " << calSimpleIntrest() << endl
             << "\n\n";
    }
    float calSimpleIntrest()
    {
        return (principle * rate * time) / 100;
    }
};

int main()
{
    Bank b1(5000, 3, 10), b2(600000, 6, 10);
    b1.display();
    b2.display();

    return 0;
}