#include <iostream>
#include <iomanip>
#include "Inventory.h"

using std::string;
using std::ostream;
 

// Constructor
Inventory::Inventory(string name, float price, int count)
{
  m_name = name;
  m_price = price;
  m_in_stock = count;
}

// Sells an item
void Inventory::sell()
{
  if(m_in_stock != 0) { // To make sure that it doesn't sell what you don't have
      m_in_stock--;
      std::cout << "Purchase successful, " << m_in_stock << " remain\n";
  } else {
      std::cout << "Sorry, that item is out of stock\n";
  }
}

// Prints out name and price of item
ostream& operator<<(ostream& stream, const Inventory& item)
{
  stream << item.m_name 
         << " $"
         << std::fixed << std::setprecision(2) << item.m_price;
  return stream;
}
