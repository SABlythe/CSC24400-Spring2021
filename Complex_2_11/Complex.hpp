#include <iostream>

class Complex
{
private:
  double _real;
  double _imaginary;
public:
  Complex() {_real=0;_imaginary=0;}
  Complex(double rVal, double iVal) {_real=rVal; _imaginary=iVal;}

  Complex operator+(Complex otherNumber);
  Complex operator+(double otherNumber);

  friend Complex operator+(double realNum, Complex cNum);
  friend std::ostream&  operator<<(std::ostream &someStream, Complex cNum);
};
