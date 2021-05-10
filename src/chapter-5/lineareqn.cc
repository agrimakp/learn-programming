//59
#include <iostream>

using namespace std;

int main()
{

  int a, b, c, d, m, n;
  cout << " Input values for a, b, c, d, m, n ";
  cin >> a >> b >> c >> d >> m >> n;
  cout << " a = " << a << " b = " << b << " c = " << c << " d = " << d << " m = " << m << " n = " << n << endl;

  float deno = ((a * d) - (c * b));
  if (deno != 0)
  {

    float x1 = ((m * d) - (b * n)) / deno;
    cout << "x1 = " << x1 << endl;

    float x2 = ((n * a) - (m * c)) / deno;
    cout << "x2 = " << x2;
  }
}
