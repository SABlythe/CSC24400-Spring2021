#include "QueensPlacer.hpp"

int main(int argc, char *argv[])
{
  QueensPlacer eighter(8);

  eighter.solve();
  eighter.print();
  
  return 0;
}
