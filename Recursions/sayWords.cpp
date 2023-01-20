// Program to say the numbers in Words 
// 412 -> four two one

#include<iostream>
using namespace std;

void sayWords(int n,string arr[]){
    // base case 
    if(n==0)
        return;
    // processing 
    int digit = n%10;
    n = n/10;

    // recursive call
    sayWords(n,arr);

    cout<<arr[digit];
}

int main(){
    int num;
    cout<<"Enter the number to convert it into words : ";
    cin>>num;
    string arr[10]={"zero ","one ","two ","three ","four ","five ","six ","seven ","eight ","nine "};
    sayWords(num,arr);
}