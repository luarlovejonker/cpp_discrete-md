#include <iostream>
#include <string>
using namespace std;

// 测量广场初始面积为：800
// 不超过最大面积值，是否扩建？

class A
{
public:
  A(/* args */)
  {
    cout << "Measuring square";
  }
  virtual ~A()
  {
    cout << "Is it expanded?" << endl;
  };
};

class B : public A
{
public:
  int width, high;
  B()
  {
    width = 40;
    high = 20;
    cout << "Initial area: " << width * high << endl;
  };
  ~B()
  {
    if (width * high < 10000)
      cout << "not exceed the maximum area,";
  };
};

int main()
{
  A *p = new B();
  delete p;
  return 0;
}