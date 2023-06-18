#include<bits/stdc++.h>
using namespace std;

int last_occur(int arr[],int n,int key){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else
            e=mid-1;
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    int n;
    int arr[6]={3,4,5,5,6,6};
    int key;
    cin>>key;
    cout<<"The last occurance of the key is :"<<last_occur(arr,6,key);
    return 0;
}