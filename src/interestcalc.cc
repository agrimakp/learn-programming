#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

  int period = 0;
  float rate, principal;

  cout << "Enter the time period : ";
  cin >> period;

  cout << "Enter interest rate : ";
  cin >> rate;

  cout << "Enter initial investment  : ";
  cin >> principal;

  float amount = principal;

  for (int year = 1; year <= period; year++)
  {
    amount = amount + ((rate * 0.01f) * amount);
  }

  cout << std::setprecision(2) << std::fixed << amount;
}
