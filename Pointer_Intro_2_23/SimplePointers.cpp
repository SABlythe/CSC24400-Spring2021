#include <iostream>

using namespace std;


int main (int argc, char *argv[])
{
  int someVariable= 42;
  int *myPointer;


  myPointer = new int();
  *myPointer = 2021;
  cout << "myPointer=" << myPointer << endl;
  cout << "*myPointer=" << *myPointer << endl;

  myPointer = &someVariable;
  cout << "myPointer=" << myPointer << endl;
  
  cout << "someVariable=" << someVariable << endl;
  cout << "*myPointer=" << *myPointer << endl;


  
  return 0;
}
