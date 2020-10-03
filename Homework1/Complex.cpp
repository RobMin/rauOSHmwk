#include <iostream>
#include <math.h>
#include "Complex.h"

Complex::Complex(double _real, double _imaginary): real(_real), imag(_imaginary) {}

Complex Complex::operator + (const Complex& num) {
  return Complex(real + num.real, imag + num.imag);
}

Complex Complex::operator - (const Complex& num) {
  return Complex(real - num.real, imag - num.imag);
}

Complex Complex::operator * (double constant) {
  return Complex(constant * real, constant * imag);
}

bool Complex::operator < (const Complex& num) const {
  return this->abs() < num.abs();
}

bool Complex::operator > (const Complex& num) const {
  return this->abs() > num.abs();
}

double Complex::abs() const {
  return sqrt(real * real + imag * imag);
}
