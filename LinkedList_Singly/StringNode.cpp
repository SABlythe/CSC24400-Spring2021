#include "StringNode.hpp"

using namespace std;

ostream&
StringNode::print(ostream& os) const
{
  os << _element;
  //os << " " << _next;
  return os;
}


ostream& operator<<(ostream &os, const StringNode &sn)
{
  return sn.print(os);
}
