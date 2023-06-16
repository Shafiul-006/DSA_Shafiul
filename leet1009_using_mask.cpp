#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m=n;
    int mask=0;
    while(n){
        mask=mask<<1|1;
        n=n>>1;
    }
    if(m==0) 
        cout<<1<<endl;
    cout<<((~m)&mask)<<endl;
}