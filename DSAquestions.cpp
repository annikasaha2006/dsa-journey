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

int GCD(int a,int b){
    while(b!=0){
        int remainder = a%b;
        a=b;
        b=remainder;

    }
    return a;
    

}


int main(){
    int num=0;
    cout<<"choose 1 for Palindrome, 2 for GCD"<<endl;
    

    

    cin>>num;
    switch (num){
        case 1: { 
            int n;
            cout<<"Enter the number to check palindrome"<<endl;
            cin>>n;
            if (Palindrome(n)){
                cout<<"The number is palindrome";
            }
            else{
                cout<<"The number is not palindrome";
            }
        
            break;
        }

        case 2: {

        
            int a;
            int b;
            cout<<"enter two numbers to check their GCD";
            cin>>a>>b;
            cout<<"The GCD is :"<<GCD(a,b);
            break;
        }
        
        default:
            cout<<"Wrong input";
            break;

    }
}
    
    