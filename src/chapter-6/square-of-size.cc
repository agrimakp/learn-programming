#include <iostream>

using namespace std;

int main()
{

  for (int i = 1; i <= 5; i++)
  {
    for (int j = 1; j <= 5; j++)
    {
      if(i == 1 || i == 5){
        cout << " S ";
      }
      if(i == 2 || i == 3 || i == 4){

        if(j == 1 || j == 5) {
         cout << " S ";
        }
        if( j == 2 || j == 3 || j == 4){
          cout << "   ";
        }

      }

    }
    cout << "\n";
  }
}
