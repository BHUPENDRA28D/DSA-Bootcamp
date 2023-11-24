#include <iostream>

using namespace std;

class Result
{
private:
    string resulted;
    int total_attempt;
    int net_right;
    int net_wrong;
    int marks_for_right;
    int marks_for_wrong;

public:
    Result(string resulted, int total_attempt, int net_right, int net_wrong, int marks_for_right = 4, int marks_for_wrong = -1)
    {
        this->resulted = resulted;
        this->total_attempt = total_attempt;
        this->net_right = net_right;
        this->net_wrong = net_wrong;
        this->marks_for_right = marks_for_right;
        this->marks_for_wrong = marks_for_wrong;
    }

    void setResult(string resulted, int total_attempt, int net_right, int net_wrong, int marks_for_right = 4, int marks_for_wrong = -1)
    {
        this->resulted = resulted;
        this->total_attempt = total_attempt;
        this->net_right = net_right;
        this->net_wrong = net_wrong;
        this->marks_for_right = marks_for_right;
        this->marks_for_wrong = marks_for_wrong;
    }

    void showResult()
    {
        cout << "Result: " << resulted << endl;
        cout << "Total Attempt: " << total_attempt << endl;
        cout << "Net Right: " << net_right << endl;
        cout << "Net Wrong: " << net_wrong << endl;
        cout << "Marks for Right: " << marks_for_right << endl;
        cout << "Marks for Wrong: " << marks_for_wrong << endl;

        double percentage = (net_right * 1.0) / total_attempt * 100;
        cout << "Percentage: " << percentage << "%" << endl;

        int marks_obtained = net_right * marks_for_right + net_wrong * marks_for_wrong;
        cout << "Marks Obtained: " << marks_obtained << endl;
    }
};

int main()
{
    Result result1("Pass", 50, 40, 10, 4, -1);
    result1.showResult();

    return 0;
}