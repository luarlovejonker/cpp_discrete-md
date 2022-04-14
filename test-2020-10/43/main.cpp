#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Sample
{
private:
  int x;

public:
  Sample() {}
  Sample(int a)
  {
    x = a;
  }
  void disp()
  {
    cout << "x=" << x << endl;
  }
  friend Sample operator*(Sample &s1, Sample &s2);
  void LeapYear()
  {
    if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
    {
      cout << "is run year";
    }
    else
    {
      cout << "is not run year";
    }
  }
};
Sample operator*(Sample &s1, Sample &s2)
{
  return Sample(s1.x * s2.x);
};

int main()
{
  Sample obj1(20);
  Sample obj2(101);
  Sample obj3;
  obj3 = obj1 * obj2; // sample(2020)
  obj3.disp();        // x=2020;
  obj3.LeapYear();    //
  return 0;
}