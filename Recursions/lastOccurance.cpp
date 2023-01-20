#include<iostream>
using namespace std;

int lastOcc(int arr[],int s,int e,int key,int ans=0){ 
    // Base case 
    if(s>=e)
        return ans;
    // Processing
    int mid=(s+e)/2; 
    // cout<<mid<<endl;
    if(arr[mid]==key){
        ans = mid;
        // cout<<"ans: "<<ans<<endl;
        return lastOcc(arr,mid+1,e,key,ans);
    }
    else if(arr[mid]<key)
        return lastOcc(arr,mid+1,e,key,ans);
    else
        return lastOcc(arr,s,mid-1,key,ans) ;
}

int main(){
    int arr[8]={3,4,5,5,5,5,8,12};
    int target=5;
    int ans = lastOcc(arr,0,7,5);
    cout<<ans<<endl;

}