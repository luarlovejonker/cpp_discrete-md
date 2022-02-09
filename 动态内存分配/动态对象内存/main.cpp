#include <iostream>
using namespace std;

class Box
{
public:
  Box()
  {
    cout << "construct call" << endl;
  }
  ~Box()
  {
    cout << "disconstruct call" << endl;
  }
};

void func1(){
	Box *myBoxArray = new Box[4];
	  delete[] myBoxArray; // 删除数组
}

int main()
{
func1();


  return 0;
}
