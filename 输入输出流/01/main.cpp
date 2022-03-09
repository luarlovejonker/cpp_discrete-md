#include <iostream>
using namespace std;
//freopen 以write形式写入文件

int main()
{
  // int x,y;
  // cin >> x >> y;
  // freopen("test.txt", "w", stdout);
  // if (y == 0)
  // {
  //   cerr << "error" << endl;
  // }
  // else
  // {
  //   cout << x << " % " << y << " = " << x % y << endl;
  // }
  // return 0;

//freopen以read模式

    char *x;
    freopen("input.dat", "r", stdin); //标准输入定向到文件
    while (cin.get() != EOF)
    {
      cin >> x;
    };

    while (cin.get() != EOF)
    {
      cout.put(cin.get());
    }
    
    cout << x << endl;
    return 0;
}

