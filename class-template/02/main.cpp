#include <iostream>
#include <string>
using namespace std;

//类模板实例化出的对象，向函数传参的方式: 指定传入的类型 — 直接显示对象的数据类型
template <class NameType, class AgeType = int>
class Person{
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

void printPerson1(Person<string, int> &p)
{
  p.showPerson();
};

//test
void test()
{
  Person<string,int> p("syn", 100);
  printPerson1(p);
};
int main()
{

  test();
  //

  system("pause");

  return 0;
}