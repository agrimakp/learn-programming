#include <iostream>
#include <cmath>
#define PI 3.14;

using namespace std;

float distance(float x1, float y1, float x2, float y2)
{
  return sqrt((pow(x2 - x1, 2) + pow(y2 - y1, 2)));
}

float area(float radius)
{
  return pow(radius, 2) * PI;
}

float perimeter(float radius) {
  return 2 * radius * PI;
}

int main()
{
  float x1, y1, x2, y2;
  // x1 and y1 are center of circle
  // x2 and y2 points on circumference
  cout << "Input coordinates x1, y1, x2, y2 : ";
  cin >> x1 >> y1 >> x2 >> y2;

  float radius = distance(x1, y1, x2, y2);

  cout << "Area : " << area(radius) << endl;
  cout << "Perimeter : " << perimeter(radius);


}
