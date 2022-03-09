#include <iostream>
using namespace std;

template <class T>
T abs(T x)
{
  return x < 0 ? -x : x;
};


int main()
{

  int n = -5;
  int m = 10;
  double d = -.5;
  float f = 3.2;

  cout << n << "s absolute value is" << abs(n) << endl; //-5的绝对值是：5
  cout << m << "s absolute value is" << abs(m) << endl; // 10的绝对值是：10
  cout << d << "s absolute value is" << abs(d) << endl; //-0.5的绝对值是：0.5
  cout << f << "s absolute value is" << abs(f) << endl; // 3.2的绝对值是：3.2

  return 0;
};