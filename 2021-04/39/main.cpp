#include <iostream>
using namespace std;
// 使输出结果为两个数的商，如果除数为0则为error

int main()
{
  int a,b;
  cin >> a >> b;
  freopen("text.txt", "w", stdout);

  if (b==0)
  {
    cout << "ERROR!" << endl;
  }else{
    cout << a << "/" << b << "=" << a/b << endl;
  }
  
  return 0;
}