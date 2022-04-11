#include<iostream>;

using namespace std;
int main(){
    char i;
    cout<<"Enter the character: ";
    cin>>i;

    if(i>='a' && i<='z'){
        cout<<"The character is lowercase";
    }
    else if(i>='A' && i<='Z'){
        cout<<"The character is uppercase";
    }
    return 0;
}