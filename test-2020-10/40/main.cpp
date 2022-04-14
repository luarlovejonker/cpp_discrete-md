#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
  fstream infile;
  infile.open("myfile.txt", ios::in);

  if (!infile.is_open())
  {
    cout << "error in file open" << endl;
    return 0;
  }

  char ch;
  while (ch != EOF)
  {
    ch = infile.get();
    cout << ch;
  }
  infile.close();
  return 0;
};