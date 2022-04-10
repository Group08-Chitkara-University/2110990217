#include<iostream>
using namespace std;

int main(){
    int num,rev= 0;
    cout<<"Enter the number: ";
    cin>>num;
    int x = num;
    for(int i = 1;i<=num;num = num/10){
        int a = num % 10;
        rev = 10*rev + a;
    }
    // cout<<rev;
    if(rev == x){
        cout<<"It is palindrone number.";
    }
    else{
        cout<<"No,it is not a palindrone number.";
    }
    return 0;
}