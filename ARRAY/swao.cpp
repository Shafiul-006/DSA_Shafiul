#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={2,2,3,4,5,3,5,6,6,7,7};
    int result=0;
    for(int i=0;i<11;i++){
        result=(result^arr[i]);
    }
    cout<<result<<endl;
}