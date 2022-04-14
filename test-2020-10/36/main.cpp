#include <iostream>

using namespace std;

class Sample
{
  int x, y;
  public: 
    void set(int i, int j){
      x = i;
      y = j;
    }
    void print()
    {
      cout << "x=" << x;
      if(y!=0){
        cout << ", y = " << y;
        cout << endl;
      }
    }
};

int main(){
  Sample a;
  a.set(1,10);
  a.print();
  a.set(2,0);
  a.print();
  return 0;
}