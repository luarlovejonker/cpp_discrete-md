#include <iostream>
using namespace std;

class ChangeStr
{
private:
  char *s;

public:
  void set(char *str)
  {
    str = new char[strlen(s) + 1];
    strcpy(str, s);
  }
}