#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Point
{
private:
  int X, Y;

public:
  Point(int xx = 0, int yy = 0) : X(xx), Y(yy)
  {
    cout << "obj" << X << "is constructed" << endl;
  }
  Point(Point &p);
  ~Point();

  int GetX()
  {
    return X;
  };
  int GetY()
  {
    return Y;
  };
};

Point::Point(Point &p)
{
  X = p.X + 1;
  Y = p.Y + 2;
  cout << "obj" << X << "is Constructed" << endl;
};

Point::~Point()
{
  cout << "obj" << X << "is disconstrcted" << endl;
};

int main()
{
  Point A(1, 2);
  Point B(A);
  Point C(A);
  return 0;
}