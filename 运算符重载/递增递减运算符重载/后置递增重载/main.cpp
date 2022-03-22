#include <iostream>
using namespace std;

// https://juejin.cn/post/6844904014073561095

class CDemo
{

  friend ostream &operator<<(ostream &out, CDemo myint);

public:
  CDemo(int nu)
  {
    this->m_Num = nu;
  };
  
  // todo
  CDemo operator++(int){
    CDemo temp = *this;
    m_Num++;
    return temp;
  }

private:
  int m_Num;
};

ostream &operator<<(ostream &out, CDemo myint)
{
  out << myint.m_Num;
  return out;
}

////
void test()
{
  CDemo d(10);
  cout << d++ << ","; // equal to d.operator++(0);
  cout << d << ",";
}

int main()
{

  test(); //10, 11,

  system("pause");

  return 0;
}