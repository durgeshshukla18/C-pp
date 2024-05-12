#include<iostream>
using namespace std;
void swap(int a, int b){
    int temp=a;
    a=b;
    b=temp;
    // a+=b;
    // b=a-b;
    // a=a-b;
    cout<<"swaped value of a is "<<a<<" and b is "<<b;
}
int main(){
    int x,y;
    cout<<"Enter two numbers : ";
    cin>>x>>y;
    swap(x,y);
}