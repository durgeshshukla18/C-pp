#include<iostream>
using namespace std;
int sum(int a, int b){
    // cout<<a+b;
    return a+b;
}
int main(){
    int x,y;
    cout<<"Enter two numbers : ";
    cin>>x>>y;
    cout<<sum(x,y);
    sum(x,y);
}