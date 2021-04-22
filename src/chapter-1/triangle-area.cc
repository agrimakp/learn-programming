#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  float a, b, c;

  cout << "Input the sides of a triangle";
  cin >> a >> b >> c;

  float s = (a + b + c) / 2;
  float result = sqrt(s * (s - a)*(s - b)*(s - c));

  cout << result;
}
