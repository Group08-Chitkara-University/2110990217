#include<iostream>;

using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    if (num<0){
        cout<<"Absolute value is: "<<num*(-1);
    }
    else{
        cout<<"Absolute value is: "<<num;
    }
    return 0;
}