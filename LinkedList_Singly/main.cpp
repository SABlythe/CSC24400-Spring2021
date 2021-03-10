#include <iostream>

#include "StringList.hpp"
#include "StringNode.hpp"


using namespace std;

int main(int argc, char *argv[])
{
  StringNode someVar("Blythe");
  
  cout << someVar << endl;

  cout << "==== end StringNode Testing ====" << endl;
  
  StringList nameList;
  nameList.insert("Blythe");
  nameList.insert("Jeevanjee");
  nameList.insert("Holland");
  nameList.insert("Garibaldi");
  nameList.insert("Kremmel");
  nameList.insert("Goncalves");

  cout << nameList;
  cout << "===== END OF NAMES LIST =====" << endl;

  StringList empty;
  cout << empty;
  cout << "===== END OF EMPTY LIST =====" << endl;
  
  return 0;
}
