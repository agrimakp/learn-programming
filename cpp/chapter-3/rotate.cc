// 1

#include <iostream>

using namespace std;

int main()
{
  int x = 2, y = 4, z = 6;

  cout << "x = "  << x << endl << "y = " << y << endl  << "z = " << z << endl;

  int a = x;
  x = y;
  y = z;
  z = a;

  cout << "x = "  << x << endl << "y = " << y << endl  << "z = " << z << endl;

}
