
class Shape{
public:
  virtual double perimeter()const { return 0; }    //返回形状的周长
  virtual double area()const { return 0; }        //返回形状的面积
  virtual const char* name()const { return "抽象图形"; }   //返回形状的名称
};

class Point{    //表示平面坐标系中的点的类
  double x;
  double y;
public:
//**********found**********
  Point (double x0,double y0):x(),y(){ }//用x0、y0初始化数据成员x、y
  double getX()const{ return x;}
  double getY()const{ return y;}
};

class Triangle: public Shape{
//**********found**********
  _____________________________________ ;   //定义三个私有数据成员
public:
  Triangle(Point p1,Point p2,Point p3):point1(p1),point2(p2),point3(p3){}
  double perimeter()const;     
  double area()const;          
  const char* name()const{ return "三角形"; }
};

