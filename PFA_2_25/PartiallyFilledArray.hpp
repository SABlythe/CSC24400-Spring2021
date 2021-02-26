
#include<iostream>
#include<string>

class PartiallyFilledArray
{
private:
  std::string *_array;
  int _currSize;
public:

  PartiallyFilledArray();
  PartiallyFilledArray(int maxSize);

  void add(const std::string &toAdd);
  
  std::ostream& print(std::ostream &toThisStream) const; 
  
  
};
