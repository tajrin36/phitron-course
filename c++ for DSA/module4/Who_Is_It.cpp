#include <bits/stdc++.h>
using namespace std;

class student {
 public:
  int id;
  string name;
  char section;
  int total_marks;
};

int main() {
  int t;
  cin >> t;
  student topper;
  for (int i = 0; i < t; i++) {
    for (int i = 1; i <= 3; i++) {
      student temp;

      cin >> temp.id >> temp.name >> temp.section >> temp.total_marks;

      if (i == 1) {
        topper = temp;
      } else {
        if (temp.total_marks > topper.total_marks) {
          topper = temp;
        } else if (temp.total_marks == topper.total_marks) {
          if (temp.id < topper.id) {
            topper = temp;
          }
        }
      }
    }
    cout << topper.id << " " << topper.name << " " << topper.section << " " << topper.total_marks << endl;
  }
  
}