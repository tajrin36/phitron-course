#include <bits/stdc++.h>
using namespace std;

class student {
 public:
  string name;
  int roll;
  int marks;
};

// custom compere func -> 2 parameter
//! assending order
bool cmp(student left, student right) {
  if (left.marks < right.marks) {  // left side choto r right side boro
    return true;
  } else {
    return false;
  }

  //! shortCut
  // return left.marks < right.marks;
}

//! decending order
/*
bool cmp(student left, student right){
    if(left.marks > right.marks){ //left side choto r right side boro
        return true;
    }else{
        return false;
    }
}
*/

//! roll wise sort
/*
bool cmp(student left, student right){
    if(left.roll < right.roll){ //left side choto r right side boro
        return true;
    }else{
        return false;
    }
}
*/

//! marks jdi equal thake tahole roll hisabe sort hbe
/*
bool cmp(student left, student right) {
  if (left.marks > right.marks) {
    return true;
  } else if (left.marks < right.marks) {
    return false;
  }
  else{
    return left.roll < right.roll;
  }
}

*/
int main() {
  int n;
  cin >> n;
  student arr[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i].name >> arr[i].roll >> arr[i].marks;
  }

  sort(arr, arr + n,
       cmp);  // custom compere function for array of object sorting

  for (int i = 0; i < n; i++) {
    cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;
  }

  return 0;
}