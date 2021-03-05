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

void
PartiallyFilledArray::operator+=(const std::string &toAdd)
{
  add(toAdd);
}

void
PartiallyFilledArray::operator+=(const PartiallyFilledArray &otherPFA)
{
  for (int index=0; index < otherPFA._currSize; index++)
    {
      *this += otherPFA._array[index];
    }
}

string&
PartiallyFilledArray::operator[] (int index)
{
  if (index < _currSize)
    return _array[index];
  else
    {
      cerr << "invalid index (" << index << ") ... size is "
	   <<  _currSize << endl;
      string *answer = new string;
      return *answer;
    }
}

const PartiallyFilledArray&
PartiallyFilledArray::operator=(const PartiallyFilledArray &rhs)
{
  _array = new string[rhs._currSize];
  // fill it in
  for (int index=0; index< rhs._currSize; index++)
    _array[index] = rhs._array[index];

  _currSize = rhs._currSize;

  return *this;
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
  
 
std::ostream& operator<<(std::ostream &os, const PartiallyFilledArray &pfa)
{
  return pfa.print(os);
}
