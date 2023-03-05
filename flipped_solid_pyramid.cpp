#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        //sidepyramid
        for(int j=1;j<=n-i+1;j++){
            cout<<"*";
        }
        //pyramid
        for(int k=1;k<=2*i-1;k++){
            cout<<" ";
        }
        //othersidepyramid
        for(int m=1;m<=n-i+1;m++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    for(int i=n;i>=1;i--){
        //sidepyramid
        for(int j=1;j<=n-i+1;j++){
            cout<<"*";
        }
        //pyramid
        for(int k=1;k<=2*i-1;k++){
            cout<<" ";
        }
        //othersidepyramid
        for(int m=1;m<=n-i+1;m++){
            cout<<"*";
        }
        cout<<endl;
    }
}