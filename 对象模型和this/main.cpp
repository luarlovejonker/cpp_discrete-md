
#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
  Person()
  {
    mA = 0;
    mVB = 1;
  }
  //非静态成员变量占对象空间
  int mA;
  int mVB;
  //静态成员变量不占对象空间
  static int mB;
  //函数也不占对象空间，所有函数共享一个函数实例
  void func()
  {
    cout << "mA:" << this->mA << endl;
  }
  //静态成员函数也不占对象空间
  static void sfunc()
  {
  }
};

class Person1
{
public:
  Person1(int age)
  {
    // 1、当形参和成员变量同名时，可用this指针来区分
    this->age = age;
  }

  Person1 &PersonAddPerson(Person1 p)
  {
    this->age += p.age;
    //返回对象本身
    return *this;
  }

  int age;
};

//空指针访问成员函数
class Person3
{
public:
  void ShowClassName()
  {
    cout << "i'm Person Class!" << endl;
  }

  void ShowPerson()
  {
    if (this == NULL)
    {
      return;
    }
    cout << mAge << endl;
  }

public:
  int mAge;
};

void test01()
{
  Person1 p1(10);
  cout << "p1.age = " << p1.age << endl;

  Person1 p2(10);
  p2.PersonAddPerson(p1).PersonAddPerson(p1).PersonAddPerson(p1); // 20+=10+=10 = 40
  cout << "p2.age = " << p2.age << endl;
}

void test02() // 空指针访问成员函数
{
  Person3 *p = NULL;
  p->ShowClassName(); //空指针，可以调用成员函数
  // p->ShowPerson(); //但是如果成员函数中用到了this指针，就不可以了
}

int main()
{

  cout << sizeof(Person) << endl; // 8 一个int整型4个字节，此Person中有两个int整型

  test02();

  system("pause");

  return 0;
}