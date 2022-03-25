#include <iostream>
using namespace std;

class Integer
{
private:
  int n;
public:
  Integer(int m): n(m)
  {
  }
  Integer &operator--() {
    --n;
    return *this;
  };

  void Show() const {
    cout << n << endl;
  };
};


int main()
{
  Integer i(168);
  --i;
  i.Show();  
  return 0;
}