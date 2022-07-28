// using do while
#include <iostream>

using namespace std;

int main()
{
  int limit, i = 1, a = 1, b = 1,c = 1;
  cout << "Input a limit ";
  cin >> limit;
  cout << a << " ";

  do
  {
      i++;
      cout << c << " " ;
      c = a + b;
      a = b;
      b = c;


  } while (i < limit);





}
