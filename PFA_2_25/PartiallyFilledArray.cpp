#include "PartiallyFilledArray.hpp"

#include <iostream>
#include <string>

using namespace std;

PartiallyFilledArray::PartiallyFilledArray()
{
  _array = new string[20];
  _currSize = 0;
}

PartiallyFilledArray::PartiallyFilledArray(int maxSize)
{
  _array = new string[maxSize];
  _currSize = 0;
}


void
PartiallyFilledArray::add(const string &toAdd)
{
  _array[_currSize] = toAdd;
  _currSize++; 
}


ostream&
PartiallyFilledArray::print(ostream &toThisStream) const
{
  for (int index=0; index<_currSize; index++)
    {
      toThisStream << *(_array+index) << endl; 
    }
  
  return toThisStream;
}
  
 
