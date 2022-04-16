//复习虚基类和二义性
// 为了避免二义性, C++ 提供虚基类机制, 派生类中继承同一个间接基类的成员仅保留一个版本。
#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
public:
  int maxspeed, weight;
  void run()
  {
    cout << "正在行进" << endl;
  }
  void stop()
  {
    cout << "停止" << endl;
  }
  Vehicle(int a, int b) : maxspeed(a), weight(b)
  {
  }
  ~Vehicle() {}
};

class Hicycle : virtual public Vehicle
{
public:
  int height;
  Hicycle(int h, int m, int w) : Vehicle(m, w), height(h)
  {
  }
};

class MotorCar : virtual public Vehicle
{
public:
  int scatnum;
  MotorCar(int s, int m, int w) : Vehicle(m, w), scatnum(s)
  {
  }
};

class Motorcycle : public Hicycle, public MotorCar
{
public:
  Motorcycle(int s, int h, int m, int w) : Hicycle(h, m, w), MotorCar(s, m, w), Vehicle(m, w)
  {
  }
};

int main()
{
  Motorcycle *mocay = new Motorcycle(1, 2, 3, 4);
  return 0;
}