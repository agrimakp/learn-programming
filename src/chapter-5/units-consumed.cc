//63
#include <iostream>

using namespace std;

int main()
{
  float units, total = 100;
  string name;
  cout << "Input name" << endl;
  cin >> name;

  cout << "Input units" << endl;
  cin >> units;

  if (units <= 200)
  {
    total = total + (80 * units);
  }
  else if (units >= 200 && units <= 300)
  {
    float diff = units - 200;
    total = total + (80 * 200) + (diff * 90);
  }
  else if (units > 300)
  {
    float diff = units - 300;
    total = total + (80 * 200) + (100 * 90) + (diff * 1);
    if (total > 400)
    {
      float additional_charge = units * (15 / 100);
      total = total + additional_charge;
    }
  }

  cout << "Total " << total << endl;
  cout << "Units " << units << endl;
  cout << "Name " << name << endl;
}
