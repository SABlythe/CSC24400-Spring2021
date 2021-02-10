
#define MAX_DIM 100

class QueensPlacer
{
private:
  char _theBoard[MAX_DIM][MAX_DIM]; // the actual chess board
  int _size;                        // true dimension of the board
  
public:
  QueensPlacer( int boardSize);

  void print();
  void solve();

private:
  void printRowBorder();
};
