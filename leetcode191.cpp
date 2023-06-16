#include<bits/stdc++.h>
using namespace std;
int main(){
    unsigned n=00000000000000000000000000001011;
    int count=0;
    while(n){
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    cout<<count<<endl;
}