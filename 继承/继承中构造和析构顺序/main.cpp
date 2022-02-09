#include <iostream>

using namespace std;

class Base
{
public:
  Base()
  {
    cout << "Base~construct!" << endl;
  }
  ~Base()
  {
    cout << "Base~disconstruct!" << endl;
  }
};

class Son : public Base
{
public:
  Son()
  {
    cout << "Son~construct!" << endl;
  }
  ~Son()
  {
    cout << "Son~disconstruct!" << endl;
  }
};

// void test01()
// {
//   //继承中 先调用父类构造函数，再调用子类构造函数，析构顺序与构造相反
//   Son s;
// }

int main()
{

  // test01();

  // Son s;
  system("pause");

  return 0;
}