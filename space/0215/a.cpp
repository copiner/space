/*
operator
*/
#include <iostream>

class Complex
{
public:
  Complex();
  Complex(double r, double i);
  Complex complex_add(Complex &d);

  void print();

private:
  double real;
  double imag;
};

Complex::Complex()
{
  real = 0;
  imag = 0;
}

Complex::Complex(double r, double i)
{
  real = r;
  imag = i;
}

Complex Complex::complex_add(Complex &d)
{

  Complex c;
  std::cout<<d.real<<"---"<<d.imag;

  c.real = real + d.real;
  c.imag = imag + d.imag;

  return c;
};

void Complex::print()
{
  std::cout << "(" << real<<", "<<imag<<"i)\n";
};



int main()
{
  Complex c1(3,4), c2(5, -10), c3;

  c3 = c1.complex_add(c2);

  c1.print();

  c2.print();

  c3.print();

  return 0;
}
