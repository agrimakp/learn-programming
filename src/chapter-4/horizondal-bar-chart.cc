//56
#include <iostream>
#include <cmath>

using namespace std;

void printBar(int input)
{
  for (int i = 0; i < 1; i++)
  {
    for (int j = 0; j < input; j++)
    {
      cout << " * ";
    }
    cout << input;
    cout << "\n";
  }
}

int main()
{
  float n, m, l, k;
  cout << "enter input";
  cin >> n >> m >> l >> k;

  float inputn = round(n); //2
  float inputm = round(m); //3
  float inputl = round(l);
  float inputk = round(k);

  printBar(inputn);
  printBar(inputm);
  printBar(inputl);
  printBar(inputk);
}
