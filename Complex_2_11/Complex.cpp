#include "Complex.hpp"


Complex
Complex::operator+(Complex other)
{
  Complex result;

  result._real = _real + other._real;
  result._imaginary = _imaginary + other._imaginary;

  return result;
}


Complex
Complex::operator+(double other)
{
  Complex result;

  result._real = _real + other;
  result._imaginary = _imaginary;

  return result;
}

Complex operator+(double realNumber, Complex cNumber)
{
  Complex result;

  result._real = cNumber._real + realNumber;
  result._imaginary = cNumber._imaginary;

  return result;
}


std::ostream&  operator<<(std::ostream &someStream, Complex cNum)
{
  someStream << cNum._real << " + " << cNum._imaginary << "i";
  return someStream;
}
