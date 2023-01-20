#include<iostream>
#include<vector>
using namespace std;

void subsetSum(int *arr,int n,int index,int sum,vector<int>&ds){
    
    if(index==n){
        ds.push_back(sum);
        return;
    }
    // pick the element
    subsetSum(arr,n,index+1,sum+arr[index],ds);
    // Dont icked the element
    subsetSum(arr,n,index+1,sum,ds);
}

int main(){
    int arr[]={3,1,2};
    // vector<int> arr1(3,{3,1,2});
    vector<int>ds;
    subsetSum(arr,3,0,0,ds);
    for(int i=0;i<ds.size();i++){
        cout<<ds[i]<<"  ";
    }

}