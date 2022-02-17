#include <iostream>
#include <iomanip>
using namespace std;

//eof()函数
int main()
{
  int x, count, sum = 0;
  freopen("input.dat", "r", stdin);

  for(count = 0; count < 10; count++){
    cin >> x;
    if(cin.eof()){
      break;
    }else {
      sum += x;
    }
  };
  cout << "before" << count <<  "num 's average:= " << 1.0*sum/count << endl; 
  return 0;
};