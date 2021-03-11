#include <iostream>

#include "SoccerTeam.hpp"

using namespace std;


int main(int argc, char *argv[])
{
  SoccerTeam useless("ManU", 1, 7);

  //useless.print(cout);
  cout << useless << endl;

  SoccerTeam empty;

  cout << "Empty =" << empty << endl;

  cin >> empty;

  cout << "Empty =" << empty << endl;
  
  return 0;
}
