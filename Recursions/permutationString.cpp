#include<iostream>
#include<string>
#include<vector>
using namespace std;

void permutationString(int*arr,int n,vector<int> &ds,bool freq[]){
    if(ds.size()==n){
        for(int i=0;i<ds.size();i++){
            cout<<ds[i]<<"  ";
        }
        cout<<endl;
        return;
    }
    for(int j=0;j<n;j++){
        if(!freq[j]){
            ds.push_back(arr[j]);
            freq[j]=true;
            permutationString(arr,n,ds,freq);
            // Backtracking
            ds.pop_back();
            freq[j]=false;
        }
    }

}

int main(){
    int arr[3]={1,2,3};
    vector<int>ds;
    bool freq[3]={false};
    permutationString(arr,3,ds,freq);
}