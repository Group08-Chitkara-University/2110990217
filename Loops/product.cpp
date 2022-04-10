#include<iostream>
using namespace std;

int main(){
    int num,mul = 1;
    cout<<"Enter the number: ";
    cin>>num;
    int x = num;
    while(num>0){
    int a = num % 10; 
    num = num / 10;
    mul = mul * a;
    }
    cout<<"The product of digits of "<<x<<" is: "<<mul;
    return 0;
}