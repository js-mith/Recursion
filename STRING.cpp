#include<iostream>
using namespace std;

int main() {
    string*sp = new string;
    *sp = "def";
    cout << sp <<endl;
    cout<<*sp <<endl;

     string s0 = "abc";

     cout << s0 << endl;

     string s12;
     getline(cin , s12);
     cout << s12 <<endl;
     
     // concatation work use "+" sign
     string s1 = "defdef";
     cout << s1[0] <<endl;
     s1[0] = 'a';
     string s2 = "def";
     string s = s1 + s2;

     cout << s <<endl; 
     s1 += s2;
     cout << s1 <<endl;

     //size of string
     cout << s1.size() <<endl;
     //subtring

     cout << s.substr(5) <<endl;
     cout << s.substr(2,3) <<endl;

     //find inner string
     cout << s.find("def") <<endl; 
     return 0;
}