#include<iostream>
#include<vector>
using namespace std;

int printCount(int arr[],int n, vector<int> &ds,int sum,int i,int target){
    // Base case 
    if(i==n){
        if(sum==target){
            return 1;
        }
        return 0;
    }  
    // Including
    sum+=arr[i];
    ds.push_back(arr[i]); 
    int l = printCount(arr,n,ds,sum,i+1,target);
    // excluding
    sum-=arr[i];
    ds.pop_back();
    int r = printCount(arr,n,ds,sum,i+1,target);

    return l+r;
    
}

int main(){
    int arr[3]={1,2,1};
    vector<int> ds;
    int ans = printCount(arr,3,ds,0,0,2);
    cout<<"Count of subsequence : "<<ans<<endl;
} 
