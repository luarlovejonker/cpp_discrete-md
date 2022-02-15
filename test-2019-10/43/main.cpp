#include <iostream>
using namespace std;

class A
{
  int a, b;

public:
  A()
  {
    a = b = 0;
  }
  A(int aa, int bb) : a(aa), b(bb)
  {
    cout << "a=" << a << "\n"
         << "b=" << b << endl;
  }
  ~A()
  {
    cout << "Destructor!" << endl;
  }
};
int main()
{
  A x, y(2, 3);
  return 0;
};

// a=2
// b=3
