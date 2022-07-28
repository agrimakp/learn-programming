#include <iostream>

using namespace std;

int main()
{

  float x, y;
  int z;


  x = 111.3;
  y = 22.567;


  // assigning to an int will cause decimal points to be lost
  z = x + y;


  cout << x << endl;
  cout << y << endl;
  cout << z << endl;
}
