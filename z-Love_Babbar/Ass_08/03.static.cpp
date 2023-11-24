#include <iostream>
using namespace std;
class Account
{
private:
    int account_num;
    float balance;
    static double rate_of_intrest;

public:
    Account() {}
    Account(int account_num, float balance)
    {
        this->account_num = account_num;
        this->balance = balance;
    }

    int getAccoutNo() { return account_num; }

    float getBalance() { return balance; }
    static void setRateofIntrest();
    float getRateIntrest() { return rate_of_intreset; }
};
double Account::rate_of_intrest = 0.0;
void Account ::setRateofIntrest()
{
    cout << "\nEnter the rate of intrest:";
    cin >> rate_of_intrest;
};

int main()
{
}