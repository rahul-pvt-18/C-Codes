#include<iostream>
using namespace std;

bool checkPalindrome(string str,int s,int e){
    // Base case 
    if(s>e)
        return true;
    if(str[s]!=str[e])
        return false;
    
    // Processing (checking)
    else{
        return checkPalindrome(str,s+1,e-1);
    }
}

int main(){
    string str="abba";
    int i=0;
    int j=str.length()-1;
    cout<<checkPalindrome(str,i,j)<<endl;
}