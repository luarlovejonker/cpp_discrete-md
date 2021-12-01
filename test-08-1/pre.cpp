
//proj1.cpp
#include <iostream>
using namespace std;

// 将数组元素个数Size定义为4
// ERROR  ********found********
const int Size = 4;
template <class T>
class MyClass
{
public:
    MyClass(T *p)
    {
        for (int i = 0; i < Size; i++)
            array[i] = p[i];
    }
    void Print();

private:
    T array[Size];
};

template <class T>
// ERROR  ********found********
void MyClass<T>::Print()
{
    for (int i = 0; i < Size; i++)
        cout << array[i] << '\t';
}

int main()
{
    int intArray[Size] = {1, 2, 3, 4};
    // ERROR  ********found********
    MyClass<int> obj(intArray);
    obj.Print();
    cout << endl;
    return 0;
}
