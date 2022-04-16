#include <iostream>
#include <string>
using namespace std;

template <typename T>
void f(T a[], int arrLength)
{
  T res[6];
  int j = 0;
  int i = arrLength - 1;
  while (i >= 0)
  {
    res[j] = a[i];
    j++;
    i--;
  }
}
int main()
{
  int a[6] = {1, 2, 3, 4, 5, 6};
  f(a, 6);
  return 0;
}