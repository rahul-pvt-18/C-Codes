#include<iostream>
using namespace std;

int sqrt(int n,int s,int e,int ans=0){
    int mid=(s+e)/2;
    int sq = mid*mid;
    // Base case 
    if(s>e)
        return ans;
    // processing 
    if(sq<=n){
        ans=mid;
        sqrt(n,mid+1,e,ans);
    }
    else
        sqrt(n,s,mid-1,ans);
}

int main(){
    int n =50;
    cout<<sqrt(n,0,n);
}