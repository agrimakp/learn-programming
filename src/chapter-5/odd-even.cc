//57
#include <iostream>

using namespace std;

bool oddOrEven(int n)
{
  if (n % 2 == 0)
  {
    return true;
  }
  return false;
}

int main()
{

  int n;
  cout << "Enter a number \n";
  cin >> n;

  // with else option
  if (oddOrEven(n))
  {
    cout << "(a) NUMBER IS EVEN";
  }
  else
  {
    cout << "(a) NUMBER IS ODD";
  }

  // without else option

 if(n % 2 == 0){
    cout << "(b) NUMBER IS EVEN";
    return 0;
 }
 cout << "(b) NUMBER IS ODD";
}
