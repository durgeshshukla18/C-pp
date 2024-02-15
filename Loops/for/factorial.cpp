#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    int f=1;
    for(int i=n;i>0;i--){
        f=f*i;
    }
    cout<<f;
}