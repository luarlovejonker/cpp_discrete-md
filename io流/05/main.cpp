#include <iostream>
using namespace std;

// fill()
// precision()
// width()

int main()
{
  double values[] = {
      1.23,
      20.3456,
      300.4567,
      4000.45678,
      50000.1234567};

  cout.fill('*');
  for (int i = 0; i < sizeof(values) / sizeof(double); i++)
  {
    cout << "values[" << i << "] = (";
    cout.width(10); //设置输出宽度
    cout << values[i] << ")" << endl;
  }
  /*
  values[0] = (******1.23)
  values[1] = (***20.3456)
  values[2] = (***300.457)
  values[3] = (***4000.46)
  values[4] = (***50000.1)
  */

  cout.fill(' '); //设置填充字符为空格
  for (int j = 0; j < sizeof(values) / sizeof(double); j++)
  {
    cout << "values[" << j << "] = (";
    cout.width(10);
    cout.precision(j + 3);
    cout << values[j] << ")" << endl;
  }
  /*
  values[0] = (     1.23)
  values[1] = (    20.35)
  values[2] = (   300.46)
  values[3] = (  4000.46)
  values[4] = ( 50000.12)
  */

  return 0;
};