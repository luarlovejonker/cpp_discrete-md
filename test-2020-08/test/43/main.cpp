#include <iostream>
#include <string>
using namespace std;
// 4, 20, 19
// 这三个数据中最大的是
//20
class Compare
{
  int a, b;
  int getmax()
  {
    return (a > b ? a : b);
  }

public:
  int c;
  void setValue(int data1, int data2, int data3)
  {
    a = data1;
    b = data2;
    c = data3;
    cout << a << "," << b << "," << c << endl;
  }
  int GetMax();
};

int Compare::GetMax()
{
  int d = getmax();
  return (d = d > c ? d : c);
}

int main()
{
  Compare object1;
  object1.setValue(4, 20, 19);
  cout << "这三个数据中最大的食：";
  cout << object1.GetMax() << endl;
  return 0;
}