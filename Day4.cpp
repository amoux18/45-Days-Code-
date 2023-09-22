#include<iostream>
using namespace std;

int main(){
    int b;
    cout<<"Enter the percentage of battery left: ";
    cin>>b;
    if(b <= 15){
        cout<<"Battery is low.";
    } else if( b > 15){
        cout<<"Battery is not low.";
    } else if ( b = 0){
        cout<<"Phone shut down.";
    }
};