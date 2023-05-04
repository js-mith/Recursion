#include<iostream>
using namespace std;
bool helper_fn(char input[] , int start ,int  end){

 if(start>=end){
     return true;
 }

 if (input[start] != input[end]) {
   return false;
 }
 helper_fn(input, start + 1, end - 1);
 
 }

bool checkPalindrome(char input[]){
    int count = 0;
    int len ;
    for (int i = 0; input[i] != '\0'; i++) {
      count++;
     len = count;
    }
 int end = len -1;

 return  helper_fn(input,0,end);
}


int main() {
      char input[50];
    cin >> input;
    
    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
     return 0;
}