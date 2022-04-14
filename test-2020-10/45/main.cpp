#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Animal
{
public:
  virtual void cry() = 0;
};
class Cat : public Animal
{
public:
  void cry()
  {
    cout << "程序设计\n"
         << endl;
  }
};
class Dog : public Animal
{
public:
  void cry()
  {
    cout << "C++";
  }
};
void fun(Animal *ptr)
{
  ptr->cry();
};

int main()
{
  Cat cat;
  Dog dog;
  Animal *p;
  p = &cat;
  fun(p);
  p = &dog;
  fun(p);
  return 0;
}

// 程序设计

// C++