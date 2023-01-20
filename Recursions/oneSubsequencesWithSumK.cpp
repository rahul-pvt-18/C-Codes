#include<iostream>
#include<vector>
using namespace std;

bool printSum(int arr[],int n,vector<int> &ds,int i,int sum,int target){
    // Base case 
    if(i==n){
        if(sum==target){
            for(int j =0;j<ds.size();j++)
                cout<<ds[j]<<"  ";
            cout<<endl;
            return true;
        }
        return false;
    }
    // Including
    ds.push_back(arr[i]);
    sum+=arr[i];
    if(printSum(arr,n,ds,i+1,sum,target))
        return true;
    // Excluding 
    sum-=arr[i];
    ds.pop_back();
    if(printSum(arr,n,ds,i+1,sum,target))
        return true;
    
    return false;

}
int main(){
    int arr[3]={1,2,1};
    vector<int> ds;
    printSum(arr,3,ds,0,0,2);
}