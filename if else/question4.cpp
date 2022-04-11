#include<iostream>
using namespace std;

int main(){
    int year,salary;
    cout<<"Enter your salary: ";
    cin>>salary;
    cout<<"How many years have you worked in this company: ";
    cin>>year;

    if(year>5){
        cout<<"Your bonus is: "<<salary*0.05;
    }
    else{
        cout<<"No Bonus";
    }
    return 0;
}

