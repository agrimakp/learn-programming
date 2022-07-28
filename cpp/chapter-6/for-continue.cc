#include <iostream>

using namespace std;


int main()
{
  int count = 0, age1, age2, age3;
  cout << " Read age of 3 persons : ";
  cin >> age1 >> age2 >> age3;
  for (int i = 0; i < 3; i++)
  {
    if(age1 < 50 || age1 > 60 || age2 < 50 || age2 > 60 || age3 < 50 || age3 > 60 ){
      continue;
    }
    count++;

  }
 cout << "Number of persons in the age group 50 to 60 : " <<  count ;
}
