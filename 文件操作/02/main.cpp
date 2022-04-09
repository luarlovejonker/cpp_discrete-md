#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
  ifstream fin;                     //声明一个ifstream对象
  fin.open("address.txt", ios::in); //用这个对象open一个文件（ios::in方式）
  if (!fin.is_open())
  {
    cout << "Can't find this file!" << endl;
  }
  else
  {
    string buff;
    while (getline(fin, buff))
    {
      cout << buff << endl;
    }
    fin.close();
  }
  return 0;
}