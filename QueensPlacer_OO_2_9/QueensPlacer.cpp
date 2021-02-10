#include "QueensPlacer.hpp"

#include <iostream>
using namespace std;

QueensPlacer::QueensPlacer(int boardSize)
{
  _size=boardSize;
  for(int row=0; row<_size; row++)
    for(int col=0; col<_size; col++)
      _theBoard[row][col] = '.';
}



void
QueensPlacer::print()
{
  for (int row=0; row<_size; row++)
    {
      printRowBorder();
      for(int col=0; col<_size; col++)
        {
          cout << '|' << _theBoard[row][col] ;
        }
      cout << "|" << endl;
    }
  printRowBorder();
}

void
QueensPlacer::solve()
{
}

void
QueensPlacer::printRowBorder()
{
  for (int col=0; col<_size; col++)
    cout << "+-";
    //cout << "+-+-+-+" << endl;

  cout << "+" << endl;
}

