#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    for(int i = 1;i<=num;i++){
        num = num/2;
        if(num%2 == 0){
            cout<<"0";
        }
        else if(num == 1){
            cout<<"1";
        }
        else{
            cout<<"1";
        }
    }
    return 0;
}
