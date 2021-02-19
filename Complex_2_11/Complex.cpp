#include "Complex.hpp"


Complex
Complex::operator+(const Complex &other) const
{
  Complex result;

  result._real = _real + other._real;
  result._imaginary = _imaginary + other._imaginary;

  return result;
}


Complex
Complex::operator+(double other) const
{
  Complex result;

  result._real = _real + other;
  result._imaginary = _imaginary;

  return result;
}

Complex operator+(double realNumber, const Complex &cNumber)
{
  Complex result;

  result._real = cNumber._real + realNumber;
  result._imaginary = cNumber._imaginary;

  return result;
}


std::ostream&  operator<<(std::ostream &someStream, const Complex &cNum)
{
  someStream << cNum._real << " + " << cNum._imaginary << "i";
  return someStream;
}
