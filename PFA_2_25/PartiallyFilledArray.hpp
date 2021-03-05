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
  void operator+=(const std::string &toAdd);
  void operator+=(const PartiallyFilledArray &toAdd);

  std::ostream& operator<<(std::ostream &os) const;

  
  std::string& operator[] (int index);

  // PartiallyFilledArray a, b, c;
  //   allows c=a=b;
  //       c =  a.operator=(b);
  const PartiallyFilledArray& operator=(const PartiallyFilledArray &rhs);
  
  std::ostream& print(std::ostream &toThisStream) const; 
  
  friend std::ostream& operator<<(std::ostream &os,
				  const PartiallyFilledArray &pfa);  
};


