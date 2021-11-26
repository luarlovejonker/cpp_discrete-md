#include <iostream>
using namespace std;
#include <string>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Phone {
	public: 
		Phone(string pName){

			cout << "Phone的构造调用" <<endl;
			this->pName = pName;
		}
		string pName;
		~Phone(){
			cout << "Phone的析构调用" <<endl;
		}
};

class Person {
	public: 
		Person(string name, string pame): m_Name(name), m_Phone(pame){
			cout << "Person的构造调用" <<endl;
		}
		//name: 
		string m_Name;
		//phone:
		Phone m_Phone;
};

int main() {
	Person p("Nick", "iPhoneMax");
	cout <<  p.m_Name << " handled" << p.m_Phone.pName << endl;
	system("pause");
	return 0;
}
