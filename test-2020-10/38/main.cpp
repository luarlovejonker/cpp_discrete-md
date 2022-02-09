#include <iostream>
#include <string>

using namespace std;

//实现复数的相加

class Complex
{
public:
  int real, imag;
  Complex(int r = 0, int i = 0)
  {
    real = r;
    imag = i;
  }
};

Complex operator+(Complex &a, Complex &b)
{
  int r = a.real + b.real; // 4
  int i = a.imag + b.imag; // 6
  return Complex(r, i);
};

int main()
{
  Complex x(1, 2), y(3, 4), z;

  z = x + y;

  cout << z.real << "+" << z.imag << "i" << endl;
  return 0;
}