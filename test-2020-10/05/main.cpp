#include <iostream>
#include <cstdlib>
#include <string.h>

using namespace std;

class Student
{
public:
	//construct
	Student()
	{
		cout << "Student de construct function call" << endl;
	}
	//disconstruct
	~Student()
	{
		cout << "Student 的 disconstruct function call" << endl;
	}

};

void test01()
{
	Student *ss = new Student[2];
  delete []ss;
}

int main() {
	
	test01();

	system("pause");

	return 0;
}
