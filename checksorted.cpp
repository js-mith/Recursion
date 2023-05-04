#include<iostream>
using namespace std;
bool is_sorted(int a[] , int size){
    if( size == 0 || size ==1){
        return true;
    }
    if(a[0] > a[1]) {
        return false;
    }
    bool issmallersorted = is_sorted(a+1 , size-1);
    return issmallersorted;
}
int main() {
    int a[5] = {1,2,3,4,5};
     is_sorted(a,5);
      cout<< is_sorted(a,5) << endl;
     
     return 0;
}