#include<iostream>
#include<vector>
using namespace std;

void combinationalSum(int arr[],int n,int target,vector<int> &ds,int i){
    // Base case 
    if(i==n){
        if(target==0){
            for(int j=0;j<ds.size();j++)
                cout<<ds[j]<<"  ";
            cout<<endl;
        }
        return;
    }
    // Including 
    if(arr[i]<=target){
        ds.push_back(arr[i]);
        combinationalSum(arr,n,target-arr[i],ds,i);
        ds.pop_back();
    }
    // Excluding
    combinationalSum(arr,n,target,ds,i+1);
    
}

int main(){
    int arr[4]={2,3,6,7};
    vector<int> ds;
    int target=7;
    combinationalSum(arr,4,target,ds,0);
}