#include <iostream>

using namespace std;

int main()
{
  int input = 3661;

  float seconds = input % 60;
  float minutes = (input % 3600) / 60;
  float hours = input / 3600;

  cout << hours << ":" << minutes << ":" << seconds;
}
