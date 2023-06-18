#include<bits/stdc++.h>
using namespace std;

int firstoccr(int arr[],int n,int key){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else
            e=mid-1;
        mid=s+(e-s)/2;

    }
    return ans;

}
int main(){
    int even[5]={1,2,3,3,4};
    int key;
    cin>>key;

    cout<<"first occurance of key value is :"<<firstoccr(even,5,key)<<endl;
}