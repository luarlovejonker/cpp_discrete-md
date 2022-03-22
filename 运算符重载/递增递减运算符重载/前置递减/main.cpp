#include <iostream>
using namespace std;

// https://juejin.cn/post/6844904014073561095

class MyInteger
{

  friend ostream &operator<<(ostream &out, MyInteger myint);

public:
  MyInteger()
  {
    m_Num = 0;
  };
  ////
  MyInteger &operator++()
  {
    ////
    m_Num++;
    ////
    return *this;
  }

  ////
  MyInteger operator++(int)
  {
    ////
    MyInteger temp = *this; ////
    m_Num++;
    return temp;
  }

private:
  int m_Num;
};

ostream &operator<<(ostream &out, MyInteger myint)
{
  out << myint.m_Num;
  return out;
}

////
void test()
{
  MyInteger myInt;
  cout << ++myInt << endl;
  cout << myInt << endl;
}

////
void test02()
{

  MyInteger myInt;
  cout << myInt++ << endl;
  cout << myInt << endl;
}

int main()
{

  test();
  // test02();

  system("pause");

  return 0;
}