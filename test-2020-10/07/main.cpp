#include <iostream>
#include <cstdlib>
#include <string.h>

using namespace std;

class Birthday
{
private:
  /* data */
public:
  Birthday()
  {
    cout << "Birthday constructor" << endl;
  };
  ~Birthday()
  {
    cout << "Birthday class 's disconstruct" << endl;
  }
};

class Test
{
private:
  //成员对象，将一个类的对象作为另一个类的成员变量
  Birthday birthday;
public:
  Test(/* args */) { 
    cout << 0 << endl;
  };
  ~Test()
  {
    cout << "Test class 's disconstruct" << endl;
  }
};

void preTest01()
{
  Test *testObj = new Test();
  delete testObj;
};

int main(){
  preTest01();
  return 0;
};

/**
 * 一个封闭类中初始化构造函数时，先执行此封闭类中的对象成员的构造函数再执行此封闭类自己的构造函数，析构则相反。
 * /