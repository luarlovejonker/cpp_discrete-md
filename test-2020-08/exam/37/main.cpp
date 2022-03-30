#include <iostream>
using namespace std;

//->2050
class Sum {
public: 
  static int x;
  Sum (int i = 2020) {
    Sum::x  = Sum::x + i;
  };
  int GetSum () {
    return Sum::x + 26;
  }
};

int Sum::x = 4;

int main()
{
  Sum test;

  cout << test.GetSum() << endl;

  return 0;
}