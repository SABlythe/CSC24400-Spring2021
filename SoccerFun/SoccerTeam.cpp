#include "SoccerTeam.hpp"

#include <iostream>
using namespace std;

// equality comparison
bool
SoccerTeam::operator==(const SoccerTeam &other) const
{
  return _name==other._name;
} 

// inequality is just the opposite of equality. 
bool
SoccerTeam::operator!=(const SoccerTeam &other) const
{
  return ! (*this==other);
}

// assignement operator
const SoccerTeam&
SoccerTeam::operator=(const SoccerTeam &other)
{
  // build a new team that is a duplicate of the rhs. 
  SoccerTeam *returnValuePtr =
    new SoccerTeam(other._name, other._wins, other._losses);

  // update this move to be the same as the rhs
  _name = other._name;
  _wins = other._wins;
  _losses = other._losses;

  // return copy of the rhs. 
  return *returnValuePtr;
}

// dump movie to stream 
ostream&
SoccerTeam::print (ostream &os) const
{
  // easy - just dump each instance variable
  os << _name << "    W:" << _wins << ", L:" << _losses;
  return os;
}

// read movie from stream
istream&
SoccerTeam::read (istream &is)
{
  // pretty straight forward - just read each component. 
  getline(is, _name);
  is >> _wins;
  is >> _losses;

  // last component will not have forcibly read newline - let's get that
  //   newline out of the way now. 
  string dummy;
  getline(is, dummy);
  
  return is;
}

// overlaod << output operator for SoccerTeam
ostream& operator<< (ostream &os, const SoccerTeam &t)
{
  return t.print(os);
}

// overlaod >> input operator for SoccerTeam
istream& operator>> (istream &is, SoccerTeam &t)
{
  return t.read(is);
}

