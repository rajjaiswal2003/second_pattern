#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    //full pyramid code;
    for(int i=1;i<=n;i++){
        for(int k=1;k<n-i+1;k++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    //half pyramid code;

    for(int i=n;i>=1;i--){
        for(int k=1;k<n-i+1;k++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
