#ifndef _STRING_NODE_HPP_
#define _STRING_NODE_HPP_

#include <iostream>
#include <string>

class StringNode
{
private:
  std::string _element;
  StringNode *_next;
public:
  StringNode(const std::string &strValue) { _element=strValue; _next=NULL;}

  const std::string& value() const { return _element; }
  std::string& value() { return _element; }

  StringNode*  next() const {return _next;}
  StringNode* &next()  {return _next;}

  std::ostream& print(std::ostream& os) const;

  friend std::ostream& operator<<(std::ostream &os, const StringNode &sn);
};




#endif
