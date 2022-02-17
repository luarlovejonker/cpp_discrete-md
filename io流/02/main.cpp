#include <iostream>
#include <iomanip>
using namespace std;
//十进制、十六进制、八进制

int main()
{
  int n = 65535, m = 20;

  cout << "1)" << n << " = " << hex << n << " = " << oct << n << endl;
  // 1)65535 = ffff = 177777


  cout << "2)" << setbase(10) << n << " = " << setbase(16) << n << " = " << setbase(8) << n << endl;
  // 2)65535 = ffff = 177777

  cout << "3)" << showbase;
  cout << setbase(10) << n << " = " << setbase(16) << n << " = " << setbase(8) << n << endl;
  // 3)20 = 0x14 = 024

  return 0;
};