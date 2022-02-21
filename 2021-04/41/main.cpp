#include <iostream>
using namespace std;

int Max(int,int,int);


int Max(int x, int y, int z){
  int m;
  if(x>y && x>z){
    m = x;
  }else if (y > x && y > z)
  { 
      m = y;  
  }else
  {
    m = z; // 89
  }

  return m;
  
  
}

int main()
{
  int a, b, c, g;
  cout << "a="; //45
  cin>> a;
  cout << "b="; //67
  cin >> b;
  cout << "c="; //89
  cin >> c;
  if (a == b && b == c)
  {
    /* code */
    cout << "the three numbers are eauql" << endl;
  }else
  {
    g = Max(a, b, c);
    cout << "the greatest number is:" << g << endl;
  }

  return 0;
}
/*
a = 45
b = 67
c = 89
the greatest number is: 89
*/