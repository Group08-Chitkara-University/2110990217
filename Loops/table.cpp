#include<iostream>
using namespace std;

int main(){
    int num,a;
    cout<<"Enter the number: ";
    cin>>num;

    for(int i = 0;i<num;i++){
        for(int j = 1;j<=10;j++){
            a = (num-i)*j;
            cout<<a<<endl;
        }
    }
    return 0;
}

