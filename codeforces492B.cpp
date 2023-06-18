#include<bits/stdc++.h>
using namespace std;
int main(){
    long long  n,l;
    cin>>n>>l;
    vector<double>v1,v2;
    bool flag_s=false,flag_e=false;
    for(int i=0;i<n;i++){
        long long a;
        cin>>a;
        if(a==0)
            flag_s=true;
        if(a==l)
            flag_e=true;
        v1.push_back(a);
    }
    sort(v1.begin(),v1.end());
    for(int i=0;i<n-1;i++){
        v2.push_back(v1[i+1]-v1[i]);
    }
    if(!flag_s)
        v2.push_back(2*v1[0]);
    if(!flag_e)
        v2.push_back(2*(l-v1[n-1]));
    sort(v2.begin(), v2.end());
    cout<<setprecision(10)<<v2[v2.size()-1]/2<<endl;
    return 0;
}