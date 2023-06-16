#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int a=1;
    n=-134;

    if(n<0){
        a=-1;
    }
    n=abs(n);
    int res=0;
    while(n){
        res=res*10+n%10;
        n/=10;
        // cout<<res<<" "<<n<<endl;
    }
    cout<<a*res<<endl;
}