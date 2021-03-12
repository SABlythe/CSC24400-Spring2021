#ifndef _STRING_LIST_HPP_
#define _STRING_LIST_HPP_

#include <iostream>
#include <string>

#include "StringNode.hpp"

class StringList
{
private:
  StringNode *_head;
  StringNode *_tail; 
public:
  StringList() : _head(NULL), _tail(NULL) {}

  void insert(const std::string &someVal);
  
  void append(const std::string &someVal);

  std::ostream& print(std::ostream& os) const;

  friend std::ostream& operator<<(std::ostream &os, const StringList &sl); 
  
};

#endif
