#include<iostream>
using namespace std;

int main(){
    int sum = 0,num = 1,end,gap;
    cout<<"Enter the length of AP: ";
    cin>>end;
    cout<<"Enter the space between two number: ";
    cin>>gap;

    for(int i = 1;i<=end;num = num + gap){
        sum = sum + num;
        cout<<num<<endl;
        i++;
        // i = i + gap;
    }
    cout<<"Sum of the abouve series is: "<<sum;
    return 0;
}