//64
#include <iostream>
#include <cmath>

using namespace std;

bool right_angle_triangle(int x, int y, int z)
{
  if (pow(x, 2) == (pow(y, 2) + pow(z, 2)))
  {
    return true;
  } else if (pow(y, 2) == (pow(x, 2) + pow(z, 2))) {
    return true;
  } else if (pow(z, 2) == (pow(y, 2) + pow(x, 2))) {
    return true;
  } else {
    return false;
  }
}

int main()
{
  int x, y, z;
  cout << "Input number" << endl;
  cin >> x;
  cin >> y;
  cin >> z;

  cout <<  (right_angle_triangle(x, y, z) ? "True" : " False");


}
