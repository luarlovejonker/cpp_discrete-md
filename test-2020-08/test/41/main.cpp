#include <iostream>
using namespace std;

class A
{
  public:
    A()
    {
      cout << "learn constructor function" << endl;
    }
    ~A(){
      cout << "类的对象进阶" << endl;
    }
};

class B: A {
  public: 
    B(int i){
      cout << i << "年" << endl;
    };
    ~B() {
      cout << "第3章";
    }
};

int main()
{
  B obj(2020);
  return 0;
}
//学习构造函数于
// 2020年
// 第3章类的对象进阶