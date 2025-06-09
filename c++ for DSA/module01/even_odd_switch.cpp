#include <iostream>
using namespace std;

int main() {
  int x;
  cin >> x;

  switch (x % 2) {
    case 0:
      cout << "Even number";
      break;

    case 1:
      cout << "Odd number";
      break;
  }
}