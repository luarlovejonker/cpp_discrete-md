#include <iostream>
using namespace std;

class A
{
public:
    int a;
    void showa()
    {
        cout << "a = " << a << endl;
    };
};

class B : virtual public A
{ //对类A进行了虚继承
public:
    int b;
};

class C : virtual public A
{ //对类A进行了虚继承
public:
    int c;
};

class D : public B, public C
{
    //派生类D的两个基类B、C具有共同的基类A
    //采用了虚继承，从而使类D的对象中只包含着类A的一个示例
public:
    int d;
};

int main()
{
    D dObj;      //声明派生类D的对象
    dObj.a = 11; //若不是虚继承，这里会报错！因为“D::a”具有二义性
    dObj.b = 22;

    dObj.showa(); // a = 11
    //若不是虚继承，这里会报错！因为“D::showa”具有二义性

    cout << "dObj.b = " << dObj.b << endl; // dObj.b = 22

    return 0;
};