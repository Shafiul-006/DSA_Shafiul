#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int answer=0;
    int j=0;
    while(a){
        int c=0;
        c=a&1;
        answer=c*pow(10,j)+answer;
        a=a>>1;
        j++;
    }
    cout<<answer<<endl;
}