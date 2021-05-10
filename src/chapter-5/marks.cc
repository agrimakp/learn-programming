//60
#include <iostream>

using namespace std;

int main()
{

  int n, count40 = 0, count60 = 0, count80 = 0, count100 = 0;
  cout << "Enter number of students : ";
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int mark;
    cin >> mark;

    if (mark <= 40)
    {
      count40++;
    }

    if (mark > 40 && mark <= 60)
    {
      count60++;
    }

    if (mark > 60 && mark <= 80)
    {
      count80++;
    }

    if (mark > 80)
    {
      count100++;
    }
  }

  cout << "Students who have obtained more than 80 marks : " << count100 << endl;

  cout << "Students who have obtained more than 60 marks : " << count80 + count100 << endl;

  cout << "Students who have obtained more than 40 marks : " << count60 + count80 + count100 << endl;

  cout << "Students who have obtained 40 or less marks : " << count40 << endl;

  cout << "In the range 81 to 100 : " << count100  << endl;

  cout << "In the range 61 to 80 : " << count80  << endl;

  cout << "In the range 41 to 60 : " << count60  << endl;

  cout << "In the range 0 to 40 : " << count40  << endl;

}
