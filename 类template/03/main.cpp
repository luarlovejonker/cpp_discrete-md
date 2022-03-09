#include <iostream>
#include <string>
using namespace std;

//类模板实例化出的对象，向函数传参的方式: 指定传入的类型 — 直接显示对象的数据类型
template <class NameType, class AgeType = int>
class Person
{
public:
  Person(NameType name, AgeType age)
  {
    this->mName = name;
    this->mAge = age;
  }
  void showPerson()
  {
    cout << "name: " << this->mName << " age: " << this->mAge << endl;
  }

  NameType mName;
  AgeType mAge;
};

template <class T1, class T2>
void printPerson2(Person<T1, T2> &p)
{
  p.showPerson();
  cout << "T1'" << typeid(T1).name() << endl;
  cout << "T2'" << typeid(T2).name() << endl;
}
// test
void test()
{
  Person<string, int> p("zbhj", 90);
  printPerson2(p);
};
int main()
{

  test();
  //

  system("pause");

  return 0;
}