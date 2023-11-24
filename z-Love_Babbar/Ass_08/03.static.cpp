#include <iostream>
using namespace std;
class Account
{
private:
    int account_num;
    float balance;
    static double rate;

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
    static float getRateIntrest() { return rate; }
};
double Account::rate = 0.0;
void Account ::setRateofIntrest()
{
    cout << "\nEnter the rate of intrest:";
    cin >> rate;
};

int main()
{
    Account a1(1452, 342257), a2(5452, 1252257);
    cout << "\nAcc No. of :- " << a1.getAccoutNo();
    cout << "\nBalance of :- " << a1.getBalance();
    cout << "---------------------------------";
    cout << "\nAcc No. of :- " << a1.getAccoutNo();
    cout << "\nBalance of :- " << a2.getBalance();
    cout << "---------------------------------";
    cout << "---------------------------------";
    Account::setRateofIntrest();
    Account::getRateIntrest();
    return 0;
}