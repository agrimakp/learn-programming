// 15

#include <iostream>
#include <cmath>

using namespace std;

void dash(int number)
{
  for (int i = 0; i < number; i++)
  {
    cout << "-";
  }
}

int main()
{
  int dashNumber = 20;
  int Num65 = 65;
  int degree = 0;

  cout << "x(degrees)";
  dash(15);
  cout << "sin(x)";
  dash(15);
  cout << "cos(x)" << endl;
  dash(Num65);
  cout << endl;

  for (int degree = 0; degree <= 180; degree+=15)
  {
    cout << degree;
    dash(dashNumber);
    cout << sin(degree);
    dash(dashNumber);
    cout << cos(degree) << endl;
    cout << endl;
  }
}
