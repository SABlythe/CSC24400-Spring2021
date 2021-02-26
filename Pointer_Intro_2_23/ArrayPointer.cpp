#include <iostream>

using namespace std;


int main(int argc, char *argv[])
{
  double *ptr=NULL;

  ptr = new double[15];

  *ptr = 3.14159;
  
  cout << ptr << endl;

  for (int index=0; index<15; index++)
    {
      cout << "found at index=" << index << " is " << *ptr++ << endl;

    }
  return 0; 
}
