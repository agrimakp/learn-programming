//61
#include <iostream>

using namespace std;

bool is_eligible(int maths, int physics, int chemistry)
{
  if (maths >= 60 && physics >= 50 && chemistry >= 40)
  {
    int total = maths + physics + chemistry;
    if (total >= 200)
    {
      return true;
    }
  }

  int total_of_2 = maths + physics;
  if (total_of_2 >= 150)
  {
    return true;
  }

  return false;
}

int main()
{

  int maths, physics, chemistry;
  cout << "Enter marks of students - maths, physics, chemistry";
  cin >> maths >> physics >> chemistry;
  cout << (is_eligible(maths, physics, chemistry) ? "Eligible" : "Not Eligible");
}
