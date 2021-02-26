#include <iostream>

#include "PartiallyFilledArray.hpp"

using namespace std;

int main(int argc, char *argv[])
{
  PartiallyFilledArray noBound;
  PartiallyFilledArray fifty(50);

  noBound.add("steve");
  noBound.add("duncan");
  noBound.add("gabriella");
  
  
  noBound.print(cout);
  fifty.print(cout);
  
  return 0;
}
