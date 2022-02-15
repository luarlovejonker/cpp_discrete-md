#include <iostream>
using namespace std;
//设计一个类满足此测试main函数
class Test
{
public:
  Test(){};
  ~Test() {};
  int X;
  int Y;
  void init(int a,int b) {
    this->X = a;
    this->Y = b;
  }
  void print() {
    cout << this->X << "-" << this->Y << "=1949" << endl; 
  }
};

int main() {
  Test a;

  a.init(2019,100);

  a.print();

  return 0;
}

//2019-100 = 1949