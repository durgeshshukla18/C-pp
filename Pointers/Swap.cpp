#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a : ";
    cin>>a;
     cout<<"Enter b : ";
    cin>>b;
    a+=b;
    b=a-b;
    a=a-b;
    cout<<"Swaped values are a="<<a<<" and b="<<b;
}