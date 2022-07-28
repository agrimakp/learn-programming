// 16

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
  int value = 0;

  cout << "Number";
  dash(15);
  cout << "Square-root";
  dash(15);
  cout << "Square" << endl;
  dash(Num65);
  cout << endl;

  for (int value = 0; value <= 100; value+=10)
  {
    cout << value;
    dash(dashNumber);
    cout << sqrt(value);
    dash(dashNumber);
    cout << (value * value) << endl;
    cout << endl;
  }
}
