#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    // for(int i=n;i>=1;i--){
    //     for(int j=i;j>=1;j--){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }

    // another pattern
    // for(int i=n;i>=1;i--){
    //     for(int j=i;j<n;j++){
    //         cout<<"  ";
    //     }
    //     for(int j=1;j<=i;j++){
    //         cout<<n-i+1<<" ";
    //     }
    //     cout<<endl;
    // }

    // task pattern..great job
    for(int i=n;i>=1;i--){
        for(int j=i;j>=1;j--){
            cout<<i-j+1<<" ";
        }
        int space=2*n-2*i;
        while(space){
            cout<<"* ";
            space--;
        }
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}