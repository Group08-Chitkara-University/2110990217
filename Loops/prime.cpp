// #include<iostream>
// using namespace std;

// int main(){
//     int n,i;
//     cout<<"Enter the number: ";
//     cin>>n;

//     for(i=2;i<n;i++){
//         if(n%i == 0){
//             break;
//         }
//     }
//     if(n==i){
//         cout<<"Prime number";
//     }
//     else{
//         cout<<"No";
//     }
//     return 0;
// }

#include<iostream>
using namespace std;

int main(){
    int count = 0,num;
    cout<<"Enter the number: ";
    cin>>num;
    for(int i = 1;i<=num;i++){
        if(num%i == 0){
            count++;
        }
    }
    if(count == 2){
        cout<<"Prime Number";
    }
    else{
        cout<<"NO";
    }
    return 0;
}