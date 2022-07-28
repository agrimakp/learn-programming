// compute and display value of x, x=a/b-c

#include <iostream>
#include <cmath>

using namespace std;

float fahrenheit(float num)
{
  return (9 * num / 5) + 32;
}

float celsius(float num)
{
  return (num - 32) * 5 / 9;
}

int main()
{
  float c, f;
  cout << "Convert to Fahrenheit \n";
  cin >> c;

  cout << fahrenheit(c) << endl;

  cout << "Convert to Celsius \n";
  cin >> f;

  cout << celsius(f) << endl;
}
