#include <iostream>

class Complex
{
private:
  double _real;
  double _imaginary;
public:
  Complex() {_real=0;_imaginary=0;}
  Complex(double rVal, double iVal) {_real=rVal; _imaginary=iVal;}

  double imaginary() const {return _imaginary;}
  double& imaginary() {return _imaginary;}
  
  Complex operator+(const Complex& otherNumber) const;
  Complex operator+(double otherNumber) const;

  friend Complex operator+(double realNum, const Complex &cNum);
  friend std::ostream&  operator<<(std::ostream &someStream, const Complex &cNum);
};
