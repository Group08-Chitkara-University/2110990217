#include<iostream>;

using namespace std;
int main(){
    int num;
    cout<<"1 Candy = 1 Rupees"<<endl;
    cout<<"how much candy do you need: ";
    cin>>num;

    for(int i = 1;i<=num;i++){
        cout<<"Candy "<<i<<endl;
        if(i == 10){
            cout<<num - i<<" Rupees return"<<endl;
            cout<<"Out of Stock";
            break;
        }
    }
    return 0;
}