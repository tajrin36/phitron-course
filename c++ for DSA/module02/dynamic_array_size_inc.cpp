#include <bits/stdc++.h>
using namespace std;

// for static array
/*
int main() {
  int arr[3];
  for (int i = 0; i < 3; i++) {
    cin >> arr[i];
  }

  int b[5];
  for (int i = 0; i < 5; i++) {
    b[i] = arr[i];
  }
  b[3] = 50;
  b[4] = 70;

  for (int i = 0; i < 5; i++) {
    cout << b[i] << " ";
  }
  return 0;
}
*/

// dynamic array 
int main() {
  int *arr = new int[3];
  for (int i = 0; i < 3; i++) {
    cin >> arr[i];
  }

  int b[5];
  for (int i = 0; i < 5; i++) {
    b[i] = arr[i];
  }
  b[3] = 50;
  b[4] = 70;

  delete[] arr; //memory waste jeno na hoy tai arr k delete kore disi

  for (int i = 0; i < 5; i++) {
    cout << b[i] << " ";
  }
  return 0;
}
