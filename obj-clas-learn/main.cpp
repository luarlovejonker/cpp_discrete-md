#include <iostream>
using namespace std;


class Person {
	int p_age;
	public:
		Person(int a){
//			cout << "this: " << *this << endl;
			p_age = a;
		};
		~Person(){
			cout << "person's endConstruction is called" << endl;
		};
		int getAge(){
			return this->p_age;
		}
};

int main() {

	Person p(18);
	
	cout <<"p's age: "<< p.getAge()<<endl;


	system("pause");
	return 0;
}
