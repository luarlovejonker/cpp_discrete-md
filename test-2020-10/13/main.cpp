
#include <iostream>
#include <string>
using namespace std;

class A {
  public:
    virtual void func1(){

    }
    void func2(){}
};

class B: public A {
  public: 
    void func1(){
      cout << 'class B func1' << endl;
    }
};