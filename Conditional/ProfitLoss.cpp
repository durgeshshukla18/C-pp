#include<iostream>
using namespace std;
int main(){
    int s,c;
    cout<<"Enter selling price: ";
    cin>>s;
    cout<<"Enter cost price: ";
    cin>>c;
    if((s-c)>0){
        cout<<"Profit of amount "<<(s-c);
    }
    else if(s==c){
        cout<<"No profit-No loss.";
    }
    else{
        cout<<"Loss of amount "<<(c-s);
    }
}