#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    int i=0;
    int j=n-1;
    while(i < j){
        if(v[i]>v[j]){
            swap(v[i],v[j]);
            i++; j--;
        }
        else if(v[i]==1 & v[j]==1)
            j--;
        else if(v[i]==0 & v[j]==0)
            i++;
        else{
            i++;
            j--;
        }
    }
    for(auto u:v){
        cout<<u<<" ";
    }
    cout<<endl;
}