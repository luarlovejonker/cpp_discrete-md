
//proj1.cpp
#include <iostream>
using namespace std;
class MyClass
{
public:
  MyClass() : count(0) { cout << "This object is "; }
  // ERROR  ********found********
  void Inc()
  {
    cout << "no. " << ++count << endl;
  }

private:
  // ERROR  ********found********
  int count;
};

int main()
{
  MyClass *obj = new MyClass;
  // ERROR  ********found********
  obj->Inc();
  return 0;
}
