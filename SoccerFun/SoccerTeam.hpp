#ifndef _SOCCER_TEAM_HPP_
#define _SOCCER_TEAM_HPP_

// FILE: SOccerTeam.hpp
// AUTHOR: Stephen Blythe
// DATE: 1/2021
//    Definition file for SoccerTeam class 

#include <string>
#include <iostream>

class SoccerTeam
{
private:
  std::string _name;   // team name
  int _wins;            // games won count
  int _losses;          // games lost count
public:
  // default constructor
  SoccerTeam() : _name(), _wins(0), _losses(0) {}

  // fully qualified constructor
  SoccerTeam(const std::string &name, int wins, int losses)
    : _name(name), _wins(wins), _losses(losses) {}

  // accessor and modifier for team name
  const std::string& name() const {return _name;}
  std::string& name() {return _name;}

  // accessor and modifier for win count
  const int wins() const {return _wins;}
  int& wins() {return _wins;}

  // accessor and modifier for loss count
  const int losses() const {return _losses;}
  int& losses() {return _losses;}

  // overloaded assignment operator
  const SoccerTeam& operator=(const SoccerTeam &other);

  // overloaded equality / inequality operators
  bool operator==(const SoccerTeam &other) const;
  bool operator!=(const SoccerTeam &other) const;

  // functions to write out/read in SoccerTeam via a stream 
  std::ostream& print (std::ostream &os) const;
  std::istream& read (std::istream &is);

  // overloaded << and >> operators. 
  friend std::ostream& operator<< (std::ostream &os, const SoccerTeam &st);
  friend std::istream& operator>> (std::istream &is, SoccerTeam &st);
};

#endif
