#include <iostream>

using namespace std;

//类中定义公有的成员函数实现++重载
class Goods
{
public:
  Goods(){};
  //声明并定义有参构造
  Goods(string name, int money, string date)
  {
    this->name = name;
    this->money = money;
    this->date = date;
  }

  int getMoney()
  {
    return this->money;
  };

  //如果将成员函数实现运算符重载，一定注意是调用谁的运算符重载函数，
  //因为此时是成员函数，这个对象的成员变量是可以任意操作的
  int operator+(Goods &obj)
  {
    int sum = this->money + obj.money;
    return sum;
  }

  //后缀++的重载函数
  int operator++(int)
  {
    int n = this->money;
    this->money++;

    return n;
  }

  //前缀++的重载函数
  int operator++()
  {
    this->money++;
    int n = this->money;

    return n;
  }

private:
  string name;
  int money;
  string date;
};

void test1()
{
  Goods phone("iphone 13", 5999, "2021/9/16");
  Goods computer("Lenovo", 6888, "2020/12/12");

  // int sum = phone + computer;
  // cout << sum << endl;

  int add = phone++;
  int sub = ++computer;
  cout << add << ", " << sub << ", ";
  cout << phone.getMoney() << endl;
}

Demo &demo::operator++(){
  return *this;
}

    int main()
{
  test1();

  return 0;
}
