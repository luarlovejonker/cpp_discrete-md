#include <iostream>
using namespace std;
#include <string>

void test1()
{
    //创建一个string容器
    string s1("hello world");
    cout << s1 << endl;

    string s2 = s1;
    cout << s2 << endl;

    string s3(10, 'w');
    cout << s3 << endl;
}

int main(){
	test1();
	return 0;
} 

