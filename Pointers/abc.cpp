#include<iostream>
using namespace std;
int main(){
    int x=3;
    int y=3;
    int z=5;
    cout<<&x<<endl;
    cout<<&y<<endl;
    cout<<&z<<endl; 
    int* p=&x;
    int* q=&y;
    int* r=&z;
    cout<<p<<endl;
    cout<<q<<endl;
    cout<<r<<endl;    
}