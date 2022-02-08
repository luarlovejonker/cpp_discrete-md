#include <iostream>

using namespace std;

char ch = '1';
char x = '11';

void fun(int i)
{
  int j = 211;
  int x = 201;
  cout << "--i=" << i << ",x=" << x << ",ch" << ch << ",i=" << i << endl;
}

int main()
{
  cout << "--x=" << x << ",ch=" << ch << endl;
  fun(11);
  return 0;
}