#include <iostream>
#include <fstream>
#include <string>

/**
 * 获取长度、判空、拼接、获取容量、截取、插入
 * */

using namespace std;

void stringOpt2()
{
  string str;

  if (str.empty())
  {
    cout << "str is null, "
              << "length = " << str.length() << endl;
    //输出：str is null, length = 0
  }
  else
  {
    cout << "str is not null" << endl;
  }

  str = str.append("abcdefg");
  cout << "str = " << str << ", size = " << str.size() << endl;
  //输出：str = abcdefg, size = 7

  const char *p = str.c_str();
  cout << "p = " << p << endl;
  //输出：p = abcdefg

  //查找字符串“de”，从第n个下标开始
  cout << "find: " << str.find("de", 0) << endl;
  //输出：find: 3
  cout << "find: " << str.find("de", 4) << endl;
  //输出：find: 18446744073709551615
  //查找失败

  //从第n个下标开始插入字符串“123”
  string str1 = str.insert(4, "123");
  cout << "str1 = " << str1 << endl;
  //输出：str1 = abcd123efg
}

int main() {
  stringOpt2();
  return 0;
}