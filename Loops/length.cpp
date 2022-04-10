#include<iostream>
using namespace std;

int main(){
    int num,n = 0;
    cout<<"Enter the number: ";
    cin>>num;

    for(int i = 1;i<=num;num = num / 10){
        int a = num % 10;
        n = n+1;
    }
    cout<<"Length of the number is: "<<n;
    return 0;
}