class Complex {
private:
  double real;
  double imag;

public:
  Complex(double _real, double _imaginary);

  Complex operator + (const Complex& num);
  Complex operator - (const Complex& num);
  Complex operator * (double constant);
  bool operator < (const Complex& num) const;
  bool operator > (const Complex& num) const;

  double abs() const;
};
