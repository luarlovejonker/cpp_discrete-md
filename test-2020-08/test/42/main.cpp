#include <iostream>
#include <string>
#include <iomanip>
#include <fstream> //extend from istream/ostream
using namespace std;

// deal file=> 1.open 2.deal 3.close
int main()
{
  // called stream's constructor func(..)
  // ifstream txtFile("1.txt"); //default open use in mode
  // string temp;
  // if (txtFile)
  // {
  //   //iterate txtFile
  //   while (getline(txtFile, temp))
  //   {
  //     /* code */
  //     cout << temp << endl;
  //   }
  // }
  // else
  // {
  //   cout << "error in open file" << endl;
  // }

  // 参考http://c.biancheng.net/view/7609.html
  /////////////////////////

  char c[90];

  ifstream inFile("in.txt", ios::in);

  if (!inFile)
    return 0;

  while (inFile.getline(c, 90))
  {
    cout << c << endl;
  }

  return 0;
}