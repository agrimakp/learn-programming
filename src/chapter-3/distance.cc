// 7

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  float u, a, timeInterval;
  cout << "Input values Initial velocity (u) and accelaration (a)";
  cin >> u >> a;
  cout << "Input time interval";
  cin >> timeInterval;

  int t = 0;
  while (t < 50)
  {

    float distance = (u * t) + ((a * pow(t, 2)) / 2);
    cout << t << " - " << distance << endl;
    t += timeInterval;
  }
}
