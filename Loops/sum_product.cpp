#include<iostream>
using namespace std;

int main(){
    int n,sum = 0,i,mul = 1;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Enter: ";
    cin>>i;

    for(int i=1; i<=n;i++){
        sum = sum + i;
        mul = mul *i;
    }
    if(i == 1){
        cout<<sum;
    }
    else if(i == 2){
        cout<<mul;
    }
    else{
        cout<<"-1";
    }
    return 0;
}