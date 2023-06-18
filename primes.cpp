#include<bits/stdc++.h>
using namespace std;
void primes(int arr[]){
    arr[0]=arr[1]=1;
    arr[2]=0;
   for(int i=4;i<1000;i+=2){
        arr[i]=1;
    }
    for(int i=3;i<=sqrt(1000+1);i++){
        if(arr[i]==0){
            for(int j=2*i;j<=1000;j+=i)
                arr[j]=1;
        }
    }
    for(int i=1;i<=1000;i++){
        if(arr[i]==0)
            cout<<i<<" ";
    }
}
int main(){
    int n;
    int arr[10004];
    primes(arr);
    return 0;
}