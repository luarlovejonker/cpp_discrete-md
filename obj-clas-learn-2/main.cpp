#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Myclass
{
public:
	Myclass()
	{
		cout << "无参构造函数" << endl;
	}
	Myclass(int a, int b)
	{
		cout << "有参构造函数" << endl;
		this->a = a;
		this->b = b;
	}

	void printMsg()
	{
		cout << this->a << ", " << this->b << endl;
	}

	//静态成员函数
	//  静态成员函数内没有this指针
	//  静态成员函数只能操作静态成员变量
	static void StaticFun()
	{
		cout << "static fun called" << endl;
		Myclass::a = 100;
		Myclass::b = 200;
		//c = 300;
		//d = 400;
		cout << Myclass::a << ", " << Myclass::b << endl;
		//cout << c << ", " << d << endl;
	}

	//静态成员变量
	//  静态成员变量操作之前必须要在类外初始化，否则报错
	//  静态成员变量不属于某一个对象，而是属于类，所以操作静态成员变量，一般通过类名结合域解析符来操作
	static int a;
	int c;

private:
	static int b;
	int d;
};

//静态成员变量都要在类外初始化
int Myclass::a = 0;
int Myclass::b = 0;

void test01(){
	//静态成员函数的调用
	// 1、通过对象调用
	Myclass c;
	c.StaticFun();
}

void test1()
{
    Myclass m1;
    Myclass m2(100, 200);
    m2.printMsg();

    m2.a = 888;
    cout << "m2.a = " << m2.a << endl;

    Myclass m3;
    cout << "m3.a = " << m3.a << endl;

    cout << Myclass::a << endl;
    Myclass::a = 111;

    cout << "m2.a = " << m2.a << endl;
}

int main(int argc, char **argv)
{
	test01();
	return 0;
}
