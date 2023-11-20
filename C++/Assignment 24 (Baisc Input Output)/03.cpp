// Define a function to calculate x raised to the power y.
#include <iostream>
using namespace std;
// Defing function
int x_power_y(int *a, int *b)
{
  int result = 1;
  while(*b--){
    result=result*(*a);
  }
  return result;
}

int main()
{
  int x, y;
  cout << "Enter the value of x and y ::";
  cin >> x >> y;

  cout << "Value of x to the power y is = " << x_power_y(&x, &y);

  return 0;
}