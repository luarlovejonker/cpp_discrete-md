#ifndef INTEGERSET
#define INTEGERSET

#include<iostream>
using namespace std;

const int MAXELEMENTS=100;                      // 集合最多可拥有的元素个数

class IntegerSet{
  int elem[MAXELEMENTS];                        // 用于存放集合元素的数组
  int counter;                                  // 用于记录集合中元素个数的计数器
public:
  IntegerSet(): counter(0){}                    // 创建一个空集合
  IntegerSet(int data[], int size);             // 利用数组提供的数据创建一个整数集合
  void add(int element);                        // 添加一个元素到集合中
  void remove(int element);                     // 删除集合中指定的元素
  int getCount()const{ return counter;}         // 返回集合中元素的个数
  int getElement(int i)const{ return elem[i];}  // 返回集合中指定的元素
  void show()const;
};

void WriteToFile(char *);

#endif

