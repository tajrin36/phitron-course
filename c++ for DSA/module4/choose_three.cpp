#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    int n, s;
    cin >> n >> s;

    int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    int sum, count = 0;
    for (int i = 0; i < n - 2; i++) {
      for (int j = i + 1; j < n - 1; j++) {
        for (int k = j + 1; k < n; k++) {
          sum = arr[i] + arr[j] + arr[k];

          if (sum == s) {
            count = 1;
            break;
          }
        }
      }
    }
    

    if (count == 1) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
}