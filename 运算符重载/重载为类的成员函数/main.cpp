#include <iostream>
using namespace std;

class myComplex //复数类
{

private:
  double real, imag; //复数的实部和虚部
public:
  myComplex()
  {
    real = 0;
    imag = 0;
  };
  myComplex(double r, double i)
  {
    real = r;
    imag = i;
  };
  myComplex addCom(myComplex c)
  {
    return myComplex(real + c.real, imag + c.imag);
  };
  void outCom()
  {
    cout << "(" << real << "," << imag << ")";
  }
  myComplex operator-(const myComplex &c)
  {
    return myComplex(this->real - c.real, this->imag - c.imag); //返回一个临时对象
  }
};

int main()
{
  myComplex c1(1, 2), c2(3, 4), res;
  c1.outCom();
  cout << "operator-";
  cout << "=";
  res = c1 - c2;
  res.outCom();
  cout << endl;
  return 0;
}