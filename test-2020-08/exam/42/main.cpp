#include <iostream>
#include <string>
using namespace std;

// deal file=> 1.open 2.deal 3.close
int main()
{
  string s1 = "2020232978";
  string s2 = "c语言程序设计";
  s2[1] = '+';
  s2[2] = s2[1];
  s2[3] = s2[4] = '.';
  s1 = s1.substr(6, 5);
  s1.swap(s2);
  string str = s1.append(s2);
  cout << "str: " << str << endl;
  return 0;
}