#include <iostream>
using namespace std;

int main() {
  int x;
  cin>>x;

  if(x % 2 == 0){
    cout << x << " is a Even number" << endl;
  }else{
    cout << x << " is a Odd number" << endl;
  }

  return 0;
}