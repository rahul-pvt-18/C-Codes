#include<iostream>
using namespace std;
void revString(string &name,int start,int end){
    
    // Base case 
    if(start>end)
        return;
    // processing 
    // char temp=name[start];
    // name[start]=name[end];
    // name[end]=temp;
    swap(name[start],name[end]);
    start++;
    end--;
    // recursive call
    revString(name,start,end);
}
int main(){
    string name="rahul";
    cout<<name<<endl;
    revString(name,0,name.length()-1);
    cout<<name<<endl;
}