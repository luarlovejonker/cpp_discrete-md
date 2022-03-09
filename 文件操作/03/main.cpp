#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;


int main()
{
  char id[11], name[21];
  int score;
  ofstream outFile;
  outFile.open("score.txt", ios::out);
  if (!outFile)
  {
    cout << "open file failed" << endl;
    return 0;
  }
  cout << "num name score" << endl;
  while (cin >> id >> name >> score)
  { 
    outFile << id << " " << name << " " << score;
    // cout << left << setw(10) << id << " " << setw(20) << name << " " << setw(3) << score << endl;
    outFile.close();
  }
  return 0;
}