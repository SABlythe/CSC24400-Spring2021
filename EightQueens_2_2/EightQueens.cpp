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
		for(int col=0; col<size; col++)
		{
			cout << theBoard[row][col] ;
		}
		cout << endl;
	}   
}

bool solveBoard()
{
	return true;
}

int main(int argc, char *argv[])
{
	cout << "What is the dimension of the board?";
	cin >> size;
	
	initBoard();
	printBoard();
	solveBoard();
	
	cout << "The solved board is:" << endl;
	printBoard();
	
	return 0;
}
