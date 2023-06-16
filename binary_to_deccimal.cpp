#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=1110101;
    int pow=0;
    int ans=0;
    while(a){
        int bit=a%10;
        ans+=bit*(1<<pow);
        a=a/10;
        pow++;
    }
    cout<<ans<<endl;
}