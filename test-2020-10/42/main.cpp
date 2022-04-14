#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class F
{
public:
  int fun(int, int);
  char fun(char, char);
  int fun(double, double);
};

int F::fun(double x, double y)
{
  return (
      (int)(x + y + 0.5));
}

int F::fun(int x, int y)
{
  return x % y;
}

char F::fun(char a, char b)
{
  if (a > b)
    return b;
  else
    return a;
}

int main()
{
  F a;
  cout << a.fun(9, 11) << endl;      // 9
  cout << a.fun(3.59, 4.06) << endl; // 8.15截断后面的小数//8
  cout << a.fun('O', 'K');           // 'K'
  return 0;
}