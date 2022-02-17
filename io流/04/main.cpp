#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  double x = 12.34;

  cout << "1)" << setiosflags(ios::scientific | ios::showpos) << x << endl;
  cout << "2)" << setiosflags(ios::fixed) << x << endl;
  // cout << "3)" << resetiosflags(ios::fixed) << setiosflags(ios::scientific | ios::showpos) << x << end;
  cout << "4)" << resetiosflags(ios::showpos) << x << endl;
  // 1)+1.234000e+001
  // 2)+12.34
  // 3)+1.234000e+001
  // 4)1.234000e+001

  return 0;
};