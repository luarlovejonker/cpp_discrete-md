#include <iostream>
#include <fstream>
using namespace std;

class Shape
{
public:
  virtual double area(/* args */) const = 0;
};
class Square: public Shape {
  private: 
    double leng;
  public:
    Square(int a): leng(a) {
    };
    virtual double area() const {
      return this->leng * this->leng;
    }
};

class Trapezoid: public Shape {
  private: 
    double topLeng; //上边长
    double bottomLeng; //下边长
    double height; //高
  public:
    Trapezoid(double a, double b, double c): topLeng(a), bottomLeng(b), height(c) {
    };
    virtual double area() const {
      return ((this->bottomLeng+ this->topLeng) * this->height) /2;
    }
};


int main () {
  Shape *p[2];
  Square se(5);
  Trapezoid td(2,5,4);

  p[0] = &se;
  p[1] = &td;
  double da = 0;
  for (int i = 0; i < 2; i++)
  {
    da += p[i]->area();
  }
  cout << "all area:" << da << endl;
  
  return 0;
}