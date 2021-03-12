#include "StringList.hpp"

using namespace std;

void
StringList::insert(const string &someVal)
{
  StringNode *newNode = new StringNode(someVal);

  newNode->next() = _head;

  _head = newNode;

  if (_tail == NULL) // started with an empty list (aka this is the first item)
    _tail = newNode;
}

void
StringList::append(const std::string &someVal)
{
  if (_tail==NULL) //nothing in list right now. (note: means head is null too)
    {
      // inserting at front would get this done as well.
      insert(someVal);
      return;
    }

  // only way we can get here is if _tail was not null.
  
  StringNode *newNode = new StringNode(someVal);
  
  newNode->next() = NULL;
  
  _tail->next()=newNode;
  
  _tail=newNode;

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
