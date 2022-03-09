#include <iostream>
using namespace std;

class Person1
{
public:
  void showPerson1()
  {
    cout << "Person1 show" << endl;
  }
};

class Person2
{
public:
  void showPerson2()
  {
    cout << "Person2 show" << endl;
  }
};

template <class T>
class MyClass
{
public:
  T obj;

  //类模板中的成员函数，并不是一开始就创建的，而是在模板调用时再生成

  void fun1() { obj.showPerson1(); }
  void fun2() { obj.showPerson2(); }
};

void test()
{
  MyClass<Person2> m;

  m.fun1(); //编译报错
  m.fun2();

}

int main()
{

  test();

  system("pause");

  return 0;
}