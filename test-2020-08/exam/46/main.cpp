#include <fstream>
#include <iostream>
using namespace std;

int main()
{
  ifstream fin;
  fin.open("address.txt", ios::in);
  if (fin.is_open())
  {
    // todo操作文件读
    char buff[1024] = {0};
    while (fin >> buff)
    {
      cout << buff << endl;
    }
    fin.close();
    return 0;
  }
  else
  {
    cout << "read error!";
    return 0;
  }
}

/*
@"sdf\r\n"
@"sdafdsafsd\r\n"
@"sdfa\r\n"
*/