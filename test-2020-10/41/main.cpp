#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int x = 2;
int y = 5;
int &value(int &z)
{
  y = 2 * 5;
  z = y;
  return z;
};

int main()
{
  int p = value(x);
  cout << "x and y's value is :" << endl;
  cout << p << endl
       << y;
  return 0;
}
