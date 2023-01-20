#include<iostream>
#include<vector>
using namespace std;

void subsetSum2(int *arr,int n,int index,vector<int> &ds){
    if(ds.size()==0){
        cout<<"{}";
    }
    for(int i=0;i<ds.size();i++){
        cout<<ds[i]<<"   ";
    }
    cout<<endl;

    for(int i=index;i<n;i++){
        if(i!=index && arr[i]==arr[i-1])
            continue;
        ds.push_back(arr[i]);
        subsetSum2(arr,n,i+1,ds);
        // backtracking
        ds.pop_back();
    }

    
}

int main(){
    int arr[]={1,2,2};
    vector<int>ds;
    subsetSum2(arr,3,0,ds);
}