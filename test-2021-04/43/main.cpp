#include <iostream>
using namespace std;

class Test
{
private:
  int n;

public:
  
  Test(int i = 16)
  {
    n = --i;
  }
  int Get()
  {
    return n;
  }
  int Get() const
  {
    return (n - 2);
  }
};

int main()
{
  Test a;
  const Test b(27);

  cout << "The first number is" << a.Get() << endl;  // 15
  cout << "The second number is" << b.Get() << endl; // 24
  return 0;
}