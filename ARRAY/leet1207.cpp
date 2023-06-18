#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,int>m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        m[a]++;
    }
    int sz=m.size();
    set<int>s;
    for(auto u:m){
        s.insert(u.second);
    }
    if(sz==s.size()){
        cout<<"true"<<endl;
    }
    else
        cout<<"false"<<endl;
}
