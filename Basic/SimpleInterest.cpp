#include<iostream>
using namespace std;
int main(){
    float SI,p,r,t;
    cout<<"Enter Principle amount, Rate of interest, Time: ";
    cin>>p;
    cin>>r;
    cin>>t;
    SI=(p*r*t)/100;
    cout<<"The interest amount is: ";
    cout<<SI;
}