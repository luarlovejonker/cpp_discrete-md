#include <iostream>
using namespace std;

int main()
{
  int n = 0;
  char ch;

  while ((ch = cin.get()) != EOF)
  {
    cout.put(ch);
    n++;
  }
  cout << "total word:" << n << endl;
};