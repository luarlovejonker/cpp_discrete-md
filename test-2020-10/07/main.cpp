#include <iostream>
#include <cstdlib>
#include <string.h>

using namespace std;

class Birthday
{
private:
  /* data */
public:
  Birthday()
  {
    cout << "Birthday constructor" << endl;
  }
  ~Birthday() {}
};

class Test
{
private:
  //成员对象，将一个类的对象作为另一个类的成员变量
  Birthday birthday;
public:
  Test(/* args */) { 
    cout << 0 << endl;
  }
  ~Test() {}

};

int main(){
  Test t1;
}