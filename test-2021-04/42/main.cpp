#include <iostream>
using namespace std;

class A
{
private:
  int x, y, sum, product;

public:
  void fun(int i, int j)
  {
    x = i;
    y = j;
    sum = x + y;
    product = x * y;
  }
  void show()
  {
    cout << x << "+" << y << "=" << sum << endl;
    cout << x << "*" << y << "=" << product << endl;
  }
};

int main()
{
  A a1;
  a1.fun(20, 30);
  a1.show();

  return 0;
}
/*
x+y=50;
x*y=600;
*/