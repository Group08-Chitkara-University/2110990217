#include<iostream>
using namespace std;

int main(){
    int num,i;
    cout<<"Enter the number: ";
    cin>>num;

    for(int i = num;i>=2;--i){
        int count = 0;
        for(int j = 1;j<=i;j++){
            if(i%j == 0){
                count++;
            }
        }
        if(count == 2){
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}