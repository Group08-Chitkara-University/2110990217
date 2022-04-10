#include<iostream>
using namespace std;

int main(){
    int num,power,a = 1;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"Enter the power: ";
    cin>>power;

    for(int i = 1;i<=power;i++){
        a = a * num;
    }
    cout<<a;
    return 0;
}