#include <iostream>
using namespace std;

//->2050
class Line;
class Point
{
  private: 
    int x,y;
    friend class Line; //通过友元访问私有成员
  public: 
    Point(int i = 0, int j = 0) {
      x = i;
      y = j;
    }
};

class Line //封闭类 两点之间直线
{
  private: Point p1, p2;
  public: 
    Line (Point xp1, Point xp2):p1(xp1), p2(xp2) {
    };
    double Distance(); //求两点之间距离
};
double Line::Distance()
{
  double dx = p2.x - p1.x;
  double dy = p2.y - p1.y;
  return sqrt(dx*dx + dy*dy);
};

int main()
{
  Point p1(1,1);
  Point p2(3,5);

  Line line(p1, p2);
  cout << line.Distance() << endl;
  return 0;
}