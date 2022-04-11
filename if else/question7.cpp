#include<iostream>

using namespace std;
int main(){
    int classes_held,classes_attend;
    cout<<"Number of classes held: ";
    cin>>classes_held;
    cout<<"Number of classes attend: ";
    cin>>classes_attend;

    float percentage = ((classes_attend*100)/classes_held);
    if (percentage>=75){
        cout<<"You are allowed to sit  in the exam";
    }
    else{
        cout<<"You are not allowed to sit in the exam";
    }
    return 0;
}