#include <iostream>
#include "Inventory.h"

using std::cin;
using std::cout;
using std::string;

int main()
{
  char choice = 'q';
  Inventory stock("Cupcake",2.99,100);

  do
  {
    cout<<"\nMENU\n====\n(S)ell item\n(Q)uit\n>";
    cin>>choice; // Gather user choice of whether to keep store open or not
    if( choice == 'S' || choice == 's' )
    {
      stock.sell();
      cout<<stock<<"\n";
    }
  }while( choice != 'q' && choice != 'Q'); // Loop to keep store open

  return 0;
}
