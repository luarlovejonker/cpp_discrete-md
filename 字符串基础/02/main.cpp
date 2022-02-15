#include <iostream>
#include <fstream>
#include <string>

void stringOpt2()
{
  std::string str;

  if (str.empty())
  {
    std::cout << "str is null, "
              << "length = " << str.length() << std::endl;
    //输出：str is null, length = 0
  }
  else
  {
    std::cout << "str is not null" << std::endl;
  }

  str = str.append("abcdefg");
  std::cout << "str = " << str << ", size = " << str.size() << std::endl;
  //输出：str = abcdefg, size = 7

  const char *p = str.c_str();
  std::cout << "p = " << p << std::endl;
  //输出：p = abcdefg

  //查找字符串“de”，从第n个下标开始
  std::cout << "find: " << str.find("de", 0) << std::endl;
  //输出：find: 3
  std::cout << "find: " << str.find("de", 4) << std::endl;
  //输出：find: 18446744073709551615
  //查找失败

  //从第n个下标开始插入字符串“123”
  std::string str1 = str.insert(4, "123");
  std::cout << "str1 = " << str1 << std::endl;
  //输出：str1 = abcd123efg
}