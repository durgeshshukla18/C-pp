#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    int s=0;
    while(n>0){
        int p=n%10;
        n=n/10;
        s=s+p;
    }
    cout<<s;
}