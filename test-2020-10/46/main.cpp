#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//简单排序算法
template <class T>
void mySwap(T &a, T &b)
{
  T temp = a;
  a = b;
  b = temp;
}

int main()
{

  int a[6] = {6, 2, 1, 45, 21, 3};
  int i, j;

  for (i = 0; i < 6; i++)
  {
    int min = i;
    for (j = i + 1; j < 6; j++)
    {
      (a[min] > a[j]) && (min = j);
    }
    if (min != i)
    {
      mySwap(a[min], a[i]);
    };
  }

  int k = 0;
  while (k < 6)
  {
    cout << a[k] << ' ';
    k++;
  }

  return 0;
}