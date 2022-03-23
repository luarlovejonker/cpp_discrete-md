#include <iostream>
#include <string>
#include <fstream> //extend from istream/ostream
using namespace std;

// deal file=> 1.open 2.deal 3.close
int main()
{
  // called stream's constructor func(..)
  //  ifstream txtFile("1.txt"); //default open use in mode
  //  string temp;
  //  if (txtFile)
  //  {
  //    //iterate txtFile
  //    while (getline (txtFile, temp))
  //    {
  //      /* code */
  //      cout << temp << endl;
  //    }
  //  }
  //  else
  //  {
  //    cout << "error in open file" << endl;
  //  }
  ifstream txtFile("1.txt");
  char cn;

  if (txtFile)
  {
    while ((cn = txtFile.get() != EOF))
    {
      /* code */
    }
  }

  return 0;
}
