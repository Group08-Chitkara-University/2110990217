#include<iostream>
#include <math.h>
using namespace std;

int main(){
    float n,a;
    cout<<"Enter the number: ";
    cin>>n;

    for(int i=1; i<=n;i++){
        a = 1/(pow(i,i));
        cout<<"1/"<<i<<"^"<<i<<" = "<<a<<endl;
    }
    return 0;
}