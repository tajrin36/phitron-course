#include <bits/stdc++.h>
using namespace std;

class Student {
 public:
  string name;
  int roll;
  int marks;
};

int main() {

    int n;
    cin >> n;

    Student arr[n];

    for(int i = 0; i < n; i++){
        cin.ignore();
        getline(cin,arr[i].name); //string input
        cin >> arr[i].roll >> arr[i].marks;
    }

    for(int i = 0; i < n; i++){
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;
    }
    
    // akta student er object decleare
    Student rakib; 

    return 0; 
}