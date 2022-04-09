#include <iostream>
#include <string>
using namespace std;

class MyClass
{
public:
  MyClass(int i = 0)
  {
    cout << 1 << "";
  }
  MyClass(const MyClass &x)
  {
    cout << 2 << "";
  };
  MyClass &operator=(const MyClass &x)
  {
    cout << 3 << "";
    return *this;
  };
  ~MyClass()
  {
    cout << 4 << "";
  };
};
// 1 1 2 2 3 3
int main()
{
  MyClass obj1(1), obj2(2), obj3(obj1);
  obj1 = obj2;
  obj1 = obj3;
  return 0;
}