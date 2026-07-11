#include <iostream>
using namespace std;

int main(){
    int n;
    int k ;
    cout<<"enter the number of rows: ";
    cin>>n;
    for(int i=1;i<=n;++i){
        
            
        for(int j=65;j<=i+64;++j){
            cout<<char(i+64)<<" ";
            
            
        }
        cout<<"\n";
    }
}