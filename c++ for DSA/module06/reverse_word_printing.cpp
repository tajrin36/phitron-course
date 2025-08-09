#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    ss >> word;
    reverse(word.begin(),word.end());
    cout << word;
    while(ss >> word){
        reverse(word.begin(),word.end());
        cout << " " << endl; 
    }
    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;
void print(stringstream& ss)
{
    string word;
    if(ss>>word)
    {
        
        print(ss);
        cout<<word<<endl;
    }
}
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    print(ss);
    return 0;
}
*/