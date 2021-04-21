#include <iostream>

using namespace std;

bool isPrime(long int n)
{
  if (n < 2)
  {
    return false;
  }

  long int deno = n / 2;

  while (deno != 1)
  {
    if (n % deno == 0)
    {
      return false;
    }

    deno--;
  }

  return true;
}

int main()
{
  long int n;
  cout << "Enter a number : ";
  cin >> n;

  for (long int i = 2; i <= n; i++)
  {
    if(isPrime(i) == true) {
      cout << i << endl;
    }
  }
}
