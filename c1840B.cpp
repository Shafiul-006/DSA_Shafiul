#include<bits/stdc++.h>
using namespace std;
int main(){
    unsigned int t,k=0;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        k=min(k,30);
        cout<<min(n,(1<<k)-1)+1<<endl;
    }
    return 0;
}