#include <iostream>
using namespace std;
/*
普通类继承模板类
- 输入1900时，输出
：
  - 不是闰年，
  - 谢谢使用！
*/

template <class Type>
class Ta
{
public:
  Type year;
  
  void print () {
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
      cout << "是闰年" << endl;
    }else
    {
      cout << "不是闰年" << endl;
    }
  }
};

class Derived : public Ta<int> {
  public: 
    void End(){
      cout << "谢谢使用" << endl;
    }
};

int main()
{
  Derived date;
  cout << "请输入";
  cin >> date.year;
  date.print();
  date.End();
  return 0;
}