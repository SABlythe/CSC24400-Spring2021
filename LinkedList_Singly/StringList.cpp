#include "StringList.hpp"

using namespace std;

void
StringList::insert(const string &someVal)
{
  StringNode *newNode = new StringNode(someVal);

  newNode->next() = _head;

  _head = newNode;
}

ostream&
StringList::print(ostream& os) const
{
  StringNode *currPtr;

  currPtr=_head;

  while(currPtr!=NULL)
    {
      os << *currPtr << endl;

      currPtr = currPtr->next();
    }

  return os;
}

ostream& operator<<(ostream &os, const StringList &sl)
{
  return sl.print(os);
}
