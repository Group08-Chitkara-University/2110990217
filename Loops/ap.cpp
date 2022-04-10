#include<iostream>
using namespace std;

int main(){
    int start,end,gap,sum =0;
    cout<<"Enter the starting point: ";
    cin>>start;
    cout<<"Enter the ending point: ";
    cin>>end;
    cout<<"Enter the space between two number: ";
    cin>>gap;

    for(int i = start;i<=end;i = i + gap){
        sum = sum + i;
        cout<<i<<endl;
        // i = i + gap;
    }
    cout<<"Sum of the abouve series is: "<<sum;
    return 0;
}