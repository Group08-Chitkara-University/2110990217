#include<iostream>
using namespace std;

int main(){
    int num1,num2,gcd;
    cout<<"Enter the First number: ";
    cin>>num1;
    cout<<"Enter the Second number: ";
    cin>>num2;
    for(int i=1; i<=num1 && i<=num2 ; i++){
        if(num1%i == 0 && num2%i == 0){
            gcd = i;
        }
    }
        cout<<"Greater common divisor is: "<<gcd;
    return 0;
}