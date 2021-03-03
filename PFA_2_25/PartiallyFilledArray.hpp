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


  
  std::ostream& print(std::ostream &toThisStream) const; 
  
  friend std::ostream& operator<<(std::ostream &os,
				  const PartiallyFilledArray &pfa);  
};


