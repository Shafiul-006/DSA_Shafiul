#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int product=1;
    while(n){
        product*=n%10;
        sum+=n%10;
        n/=10;
    }
    cout<<abs(product-sum)<<endl;
}