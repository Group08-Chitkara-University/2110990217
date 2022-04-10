#include<iostream>
using namespace std;

int main(){
    int start,end,count;
    cout<<"Enter the starting point: ";
    cin>>start;
    cout<<"Enter the ending point: ";
    cin>>end;

    for(int i = start;i<=end;i++){
        count = 0;
        for(int j = 1;j<=i;j++){
            if(i%j == 0){
                count++;
            }
        }
        if(count>2){
            cout<<i<<endl;
        }
    }

    return 0;
}