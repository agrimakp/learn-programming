// 1
#include <iostream>

using namespace std;

int main()
{
  int MAXGIRLS, MAXITEMS;

  cout << "ENTER MAXGIRLS ";
  cin >> MAXGIRLS;

  cout << "ENTER MAXITEMS ";
  cin >> MAXITEMS;

  int girl_total[MAXGIRLS], value[MAXGIRLS][MAXITEMS], item_total[MAXITEMS], grand_total;
  cout << "Input values ";

  for (int i = 0; i < MAXGIRLS; i++)
  {
    girl_total[i] = 0;
    for (int j = 0; j < MAXITEMS; j++)
    {
      cin >> value[i][j];
      // total value of sales by each girl
      girl_total[i] += value[i][j];
    }
  }

  for (int i = 0; i < MAXITEMS; i++)
  {
    item_total[i] = 0;

    for (int j = 0; j < MAXGIRLS; j++)
    {
      // total value of each item sold
      item_total[i] += value[j][i];
    }
  }

  // Grand total of sales of all items by all girls

  grand_total = 0;
  for (int i = 0; i < MAXITEMS; i++)
  {
    grand_total = grand_total + item_total[i];
  }

  cout << "Girls Totals" << endl;
  cout << "------------" << endl;
  for (int i = 0; i < MAXGIRLS; i++)
  {
    cout << i + 1 << " Sales girl : " << girl_total[i] << endl;
  }

  cout << "Item Totals" << endl;
  cout << "------------" << endl;

  for (int i = 0; i < MAXITEMS; i++)
  {
    cout << i + 1 << "Item : " << item_total[i] << endl;
  }

  cout << "------------" << endl;


  cout << "Grand Total : " << grand_total << endl;


}
