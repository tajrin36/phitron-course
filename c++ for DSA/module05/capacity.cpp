#include<bits/stdc++.h>
using namespace std;

int main(){

    //! string size
    string s = "hello world";
    cout << s.size() << endl;

    //! string max size
    cout << s.max_size() << endl;

    //! string available capacity  
    cout << s.capacity() << endl;

    //! string clear
    // s.clear();
    // cout << s << endl;

    //! empty function
    if(s.empty() == true){
        cout << "empty" << endl;
    }else{
        cout << "not empty" << endl;
    }

    string str;
    cin>>str;
    // str.resize(5);
    // str.resize(20,'X');
    // cout<<str.size()<<endl;
    // cout<<str<<endl;
    str.resize(5);
    cout<<str<<endl;
    str.resize(11,'X');
    cout<<str<<endl;

    return 0;
}