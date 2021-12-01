
// proj1.cpp
#include <iostream>
using namespace std;

class MyClass
{
public:
    MyClass(int x) : number(x) {};
    // ERROR   **********found**********
    ~MyClass() {};
    // ERROR   **********found**********
    friend void Judge(MyClass &obj);

private:
    int number;
};

void Judge(MyClass &obj)
{
    if (obj.number == 10)
        cout << "You are right." << endl;
    else
        cout << "Sorry" << endl;
}
int main()
{
    // ERROR   **********found**********
    MyClass object = MyClass(10);
    Judge(object);
    return 0;
}
