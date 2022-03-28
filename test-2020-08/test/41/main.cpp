#include <iostream>
using namespace std;

//使用函数模板求一个数组各个元素的积
template <class Type>
Type Mul(Type a[], int n)
{
  Type t = 1;
  for (int i = 0; i < n; i++)
  {
    t *= a[i];
  }
  return t;
};

int main()
{
  int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  cout << Mul<int>(a, 9) << endl;
  return 0;
}