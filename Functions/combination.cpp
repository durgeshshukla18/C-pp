#include<iostream>
using namespace std;
int factorial(int x){
    int f=1;
    while(x>0){
        f=f*x;
        x--;
    }
    //return 0;
}
int main(){
    int n,r;
    cout<<"Enter n : "<<endl;
    cin>>n;
    cout<<"Enter r : "<<endl;
    cin>>r;
    cout<<factorial(n)/(factorial(r)*factorial(n-r));
}