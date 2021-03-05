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

  fifty.add("CSC14400");
  fifty.add("CSC24400");
  fifty.add("CSC36000");
  fifty.add("CSC99900");

  fifty+= "MTH27100";
  fifty+= "CSC30500";
  
  
  //  noBound.print(cout);
  cout << noBound;  // operator<<(cout, noBound); // non-member function
  cout << "==================================" << endl
       <<fifty << endl;

  cout << "==================================" << endl;

  cout << fifty[99821] << endl;

  fifty+=noBound;
  cout << "==================================" << endl
       << fifty;
  //fifty.print(cout);

  PartiallyFilledArray copy;

  /*
    int a=2;
    int b=a;
    b=3;   /// this should not change a !!!! 
   */
  
  copy = fifty;

  cout << fifty << "===========================================" <<endl;
  cout << copy << "===========================================" << endl;

  copy[1]= "CSC43000";

  cout << fifty << "===========================================" <<endl;
  cout << copy << "===========================================" << endl;
  
  return 0;
}
