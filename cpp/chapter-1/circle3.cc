// input radius .compute area of the circle?

#include <iostream>
#include <cmath>
#define PI 3.14;

using namespace std;

float area(float radius)
{
  return pow(radius, 2) * PI;
}

int main()
{
  float radius;
  // x1  y1 x2 and y2 points on circumference are diameter
  cout << "Input radius of a circle : ";
  cin >> radius;


  cout << "Area : " << area(radius) << endl;
}
