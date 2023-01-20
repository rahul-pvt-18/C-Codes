#include<iostream>
#include<vector>
using namespace std;

void printSubWithSum(int arr[],vector<int> &ds,int i,int sum,int target,int n){
    // cout<<sum<<endl;
    // Base case
    if(i==n){
        if(sum==target){
            for(int j=0;j<ds.size();j++){
                cout<<ds[j]<<"  ";
            }
            cout<<endl;
        }
        return;
    } 
    // Including 
    ds.push_back(arr[i]);
    sum+=arr[i];
    printSubWithSum(arr,ds,i+1,sum,target,n);
    // Excluding 
    sum-=arr[i];
    ds.pop_back();
    printSubWithSum(arr,ds,i+1,sum,target,n);
}

int main(){

    int arr[3]={1,2,1};
    vector<int> ds;
    printSubWithSum(arr,ds,0,0,2,3);

}