#include<iostream>
#include<math.h>
using namespace std;

int main(){
    double num,cube;
    cout<<"Enter the number: ";
    cin>>num;

    for(int i = 1;i<=num;i++){
        cube = i*i*i;
        cout<<"The Cube of number "<<i<<" is: "<<cube<<endl;
    }
    return 0;
}