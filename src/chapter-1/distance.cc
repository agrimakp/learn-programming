// distance between 2 points (x1,y1) and (x2,y2)  ,  D^2 = (x2 -x1)^2 + (y2 -y1)^2
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  float x1, x2, y1, y2;
  cout << " Input the coordinate points x1, y1, x2, y2 ";
  cin >> x1 >> y1 >> x2 >> y2;

  float result = sqrt((pow(x2 - x1, 2) + pow(y2 - y1, 2)));
  cout << result;
}
