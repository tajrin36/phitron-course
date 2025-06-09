#include <algorithm>
#include <iostream>
using namespace std;

int main() {

  int a, b;
  cin >> a >> b;
  int minimum = min(a, b);
  int maximum = max(a, b);
  swap(a,b);

  cout << "min = " << minimum << endl;
  cout << "max = " << maximum << endl;

//   cout << min({89,3,56,7,8}); multiple digit
  return 0;
}