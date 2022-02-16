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

  ChangeStr(char *a) {
    set(a);
  }

  ~ChangeStr() {
    delete s;
  }
};

int main() {
  ChangeStr s1("Welcome!"), s2("Hello!");
  return 0;
}