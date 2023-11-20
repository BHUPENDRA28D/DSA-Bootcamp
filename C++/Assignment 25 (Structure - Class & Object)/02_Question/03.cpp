#include <iostream>
using namespace ::std;
class Factorial
{
private:
    int fact, n;

public:
    // Set value of n
    void set_N(int x)
    {
        n = x;
    }
    // Get value of n
    int get_N()
    {
        return n;
    }
    // Get value of factorial
    int getfactorial()
    {
        return fact;
    }
    // To calclulate the factorial.
    void calculateFactorial()
    {
        fact = 1;
        if (n <= 0)
        {
            fact = 1;
            return;
        }
        else
            for (int i = 1; i <= n; i++)
                fact *= i;
    }
};
int main()
{
    Factorial f1, f2;
    f1.set_N(5);
    f1.calculateFactorial();
    cout << "Factorial of  " << f1.get_N() << " = " << f1.getfactorial();
    return 0;
}