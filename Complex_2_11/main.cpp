// Author: S. Blythe
// Date: 2/16/21


#include "Complex.hpp"

#include <iostream>
using namespace std; 

int main(int argc, char *argv[])
{
  Complex num1(3,8);  // almost like Java:   Complex num1= new Complex(3,8);
  Complex num2(-2,4);

  Complex otherNumber(0, -9);
  cout << otherNumber << endl;
  
  cout << num1;
  cout << endl;

  cout << num2;
  cout << endl;

  
  Complex sum;

  sum = num1 + num2; 
  /*  C++ internally rewrites the above as 
        sum = num1.operator+(num2);
  */
  
  cout << sum << endl;

  // operator<< ( operator<< (cout, sum) , endl );

  
  sum = num1 + 7; 
  // sum = num1.operator+(7);

  cout << sum;
  cout << endl;
  
  sum = 7 + num1;
  // sum = 7.operator+(num1); //ERROR - 7 is not an object
  // or
  // sum = operator+(7,num1); // WORKS! if the function is coded ...

  cout << sum;
  // cout.operator<<(sum);
  //   or
  // operator<<(cout, sum);
  cout << endl;

  
  sum.imaginary()=-3.14159;

  cout << sum << endl;
  return 0;
}
