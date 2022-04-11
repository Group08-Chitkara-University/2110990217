#include<iostream>
using namespace std;

int main(){
    int length,bredth;
    cout<<"Enter the length: ";
    cin>>length;
    cout<<"Enter the bredth: ";
    cin>>bredth;

    if(length == bredth){
        cout<<"It is a square";
    }
    else{
        cout<<"It is a rectange";
    }
    return 0;
}