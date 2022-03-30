#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
  // called stream's constructor func(..)
  double score = 90.658;
  int id = 201902;
  string name = "ZhangMeng";
  cout.width(10);
  cout << name << endl;

  cout << setw(10) << setfill('#') << id << endl;

  cout << "final score:" << setprecision(3) << score << endl;

  return 0;
}