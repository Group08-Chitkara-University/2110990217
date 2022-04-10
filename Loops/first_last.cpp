#include<iostream>
using namespace std;

int main(){
    int num,a,sum=0;
    cout<<"Enter the number: ";
    cin>>num;
    int x = num;
    for(int i = 1;num>0;i++){
        a = num % 10;
        num = num /10;
        // cout<<a<<endl;
        if(i == 1){
            sum = sum +a;
            cout<<"Last Digit is: "<<a<<endl;
        }
    }
        cout<<"First Digit is: "<<a<<endl;
        cout<<"The sum of first and last digit of "<<x<<" is:"<<sum +a;
    return 0;
}