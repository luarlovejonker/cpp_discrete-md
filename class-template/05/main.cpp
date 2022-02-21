#include <iostream>
#include <string>
using namespace std;

template <class T>
class Base
{
  T m;
};

template <class T, class V>
class Son : public Base<V> //必须指定一个类型
{
  public:
    void showLangage();
};
/*
      template <模板参数表>
      返回类型名 类模板名<模板参数标识符列表>::成员函数名(参数表) {
         函数体
      };
*/
template <class T, class V>
void Son<T, V>::showLangage() {
  cout << "a" << endl;
}

void test01()
{
  Son<int,char> c;
}


int main()
{

  test01();


  system("pause");

  return 0;
}