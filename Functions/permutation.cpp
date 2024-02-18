#include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=x;i>0;i--){
        f=f*i;
    }
}
int main(){
    int n,r;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter r : ";
    cin>>r;
    cout<<(fact(n)/fact(n-r));
}