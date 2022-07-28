// modify: provide border line

#include <iostream>

using namespace std;

void horizondalLine()
{
  for (int i = 0; i <= 15; i++)
  {
    cout << "-";
  }
}

int main()
{
  string fl, sl, tl;
  cout << " Name : ";
  cin >> fl;
  cout << " address : ";
  cin >> sl;
  cout << " city : ";
  cin >> tl;

  horizondalLine();
  cout << "\n| Name : " << fl << "   |\n";
   cout << "| address : " << sl <<  "|\n";
  cout << "| city : " << tl << "   |\n";
  horizondalLine();

}
