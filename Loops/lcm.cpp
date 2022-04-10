#include<iostream>
using namespace std;

int main(){
    int num1,num2,lcm = 0;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number : ";
    cin>>num2;

    for(int i = 2; i<=num1 && i<=num2; i++){
        if(num1%i == 0 && num2 % i == 0){
            i = i*i;
        }
        cout<<i;
    }
    return 0;
}