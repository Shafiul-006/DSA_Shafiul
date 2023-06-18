#include<bits/stdc++.h>
using namespace std;
int b_s(int arr[],int n,int k){
    int low=0;
    int high=n-1;
    int mid=low+(high-low)/2;
    while(low<=high){
        mid=low+(high-low)/2;
        if(arr[mid]==k){
            return mid;
        }
        else if(arr[mid]>k){
            high=mid-1;
        }
        else
            low=mid+1;
    }
    return -1;
}
int b_s_last_index(int arr[],int n,int k){
    int low=0;
    int high=n-1;
    int mid=low+(high-low)/2;
    while(low<high){
        mid=low+(high-low)/2;
        if(arr[mid]<=k){
            low=mid;
        }
        else
            high=mid-1;
    }
    if(arr[low]==k)
        return low;
    else
        return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int k;
    cin>>k;
    // cout<<b_s(arr,n,k)<<endl;
    cout<<b_s_last_index(arr,n,k)<<endl;
}