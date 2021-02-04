// Author: S. Blythe
// Date: 2/2021
// Purpose: solves n-queens problem

#include <iostream>
using namespace std;

// maximum possible board size
#define MAX_DIM 100

char theBoard[MAX_DIM][MAX_DIM]; // the actual chess board
int size;                        // true dimension of the board

void initBoard()
{
	for(int row=0; row<size; row++)
		for(int col=0; col<size; col++)
			theBoard[row][col] = '.';
}

void printRowBorder()
{
  for (int col=0; col<size; col++)
    cout << "+-";
    //cout << "+-+-+-+" << endl;

  cout << "+" << endl;
}

void printBoard()
{
  // might want (size=3)
  //    +-+-+-+
  //    |Q| | |
  //    +-+-+-+
  //    | | |Q|
  //    +-+-+-+
  //    | |Q| |
  //    +-+-+-+
	
  for (int row=0; row<size; row++)
    {
      printRowBorder();
      for(int col=0; col<size; col++)
	{
	  cout << '|' << theBoard[row][col] ;
	}
      cout << "|" << endl;
    }
  printRowBorder();
}

bool canPlace(int inRow, int inCol)
{
  // check the row ...
  for (int col=0; col<inCol; col++)
    {
      if (theBoard[inRow][col] == 'Q')
	return false;
    }
  
  // check UL diagonal
  int row = inRow-1;
  int col = inCol-1;

  while( row>=0 && col>=0)
    {
      if (theBoard[row][col] == 'Q')
	return false;

      row--;
      col--;
    }

  // check LL diagonal
  row = inRow+1;
  col = inCol-1;
  while( row<size && col>=0)
    {
      if (theBoard[row][col] == 'Q')
	return false;

      row++;
      col--;
    }
  
  return true;
}

bool solveBoard(int fromCol)
{
  if (fromCol==size)
    return true;
  
  // 1. put a queen in column fromCOl ...
  for (int row=0; row<size; row++)
    {
      if (canPlace(row, fromCol))
	{
	  // put the queen on the board ...
	  theBoard[row][fromCol] = 'Q';
	  
	  // 2. solve the rest of the board. (move on to next column)
	  bool solvedRest = solveBoard(fromCol+1);

	  if (solvedRest)
	    return true;
	  else // didn't solve the rest of board, placement was bad
	    {
	      // rmove the queen we just placed. 
	      theBoard[row][fromCol]='.';
	    }
	}
    }
  // if we get here, we tried all rows and none worked ...
  return false;
}

bool solveBoard()
{
  return solveBoard(0);
}


int main(int argc, char *argv[])
{
	cout << "What is the dimension of the board?";
	cin >> size;
	
	initBoard();
	printBoard();
	if (solveBoard())
	  {
	    cout << "The solved board is:" << endl;
	    printBoard();
	  }
	else
	  cout << "NO SOLUTION FOUND!" << endl;
	
	return 0;
}
