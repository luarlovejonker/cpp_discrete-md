#include <iostream>
using namespace std;

class Integer
{
private:
  int n;

public:
  Integer(int n) : n(n)
  {
    n = 0;
  }
  Integer &operator--()
  {
    --n;
    return *this;
  }
  void Show() const
  {
    cout << this->n << endl;
  }
};

int main()
{
  Integer i(168);
  --i;
  i.Show();
  system("pause");

  return 0;
}