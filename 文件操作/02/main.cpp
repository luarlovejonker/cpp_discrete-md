#include <iostream>
#include <fstream>
using namespace std;

int main()
{

  // ifstream inFile("c:\\temp\\test.txt", ios::in);
  // if (inFile)
  // {
  //   cout << "success open c:\\temp\\test.txt" << endl;
  //   inFile.close();
  // }
  // else
  // {
  //   cout << "unsuccess open c:\\temp\\test.txt" << endl;
  // }

  ofstream outFile("test1.txt", ios::out);
  if (!outFile)
  {
    cout << "error" << endl;
  }
  else
  {
    cout << "success open：test1.txt" << endl;
    outFile.close();
  }

  return 0;
}