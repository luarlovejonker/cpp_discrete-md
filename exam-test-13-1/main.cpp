
#include<iostream>
#include<cmath>
using namespace std;

class Line;

double length(Line);

class Line{      //线段类
  double x1,y1;  //线段端点1
  double x2,y2;  //线段端点2
public:
  // ERROR **********found**********
  Line(double x1, double y1, double x2, double y2){
    this->x1=x1;
    this->y1=y1;
    this->x2=x2;
    this->y2=y2;
  }
  double getX1()const{ return x1; }
  double getY1()const{ return y1; }
  double getX2()const{ return x2; }
  double getY2()const{ return y2; } 
  void show()const{
    cout<<"End point 1=("<<x1<<" , "<<y1;
    cout<<"), End point 2=("<<x2<<" , "<<y2;
    // ERROR **********found**********
    cout<<"), length="<<length(*this)<<"。"<<endl;
  }
};

double length(Line l){ 
  // ERROR **********found**********
  return sqrt((l.getX1()-l.getX2())*(l.getX1()-l.getX2())+(l.getY1()-l.getY2())*(l.getY1()-l.getY2())); 
}

int main(){
  Line r1(1.0,8.0,5.0,2.0);
  r1.show();
  return 0;
}

