#include <iostream>
using namespace std;
int main() {
  int day;
  cin >> day;

  switch (day) {
    case 1:
      cout << "Sunday\n";
      break;

    case 2:
      cout << "Monday\n";
      break;

    case 3:
      cout << "Tuesday\n";
      break;

    case 4:
      cout << "Wednesday\n";
      break;

    case 5:
      cout << "Thustday\n";
      break;

    case 6:
      cout << "Friday\n";
      break;

    case 7:
      cout << "Saturday\n";
      break;

    default:
      cout << "Wrong input!";
  }
  return 0;
}