#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool Palindrome(int num){
    int n=num;
    string str=to_string(num);
    string str1=str;
    reverse(str.begin(), str.end());
    if (str==str1){
        return true;
    }
    else{
        return false ;
    }

}


int main(){
    int num=0;
    cout<<"Enter value";

    cin>>num;
    if (Palindrome(num)){
        cout<<"The number is palindrome";
    }
    else{
        cout<<"The number is not palindrome";
    }
}