#include<iostream>

using namespace std;
int main(){
    int quantity;
    cout<<"Enter the quantity of products: ";
    cin>>quantity;
    int price = quantity*100;

    if(price>1000){
        cout<<"Your total cost is: "<<price - (price*0.1);
    }
    else{
        cout<<"Your total cost is: "<<price;
    }
    return 0;
}