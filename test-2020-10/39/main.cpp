#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

  double x = 3.1415926;

  cout.width(5);
  cout << "$" << endl;
  cout << setprecision(4) << x << endl;
  return 0;
}
