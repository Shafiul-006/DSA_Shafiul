#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int,int>m;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        m[a]++;
    }
    vector<int>v;
    for(auto u:m){
        if(u.second==2){
            v.push_back(u.first);
        }
    }
    for(auto u:v){
        cout<<u<<" ";
    }
}