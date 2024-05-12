#include<iostream>
using namespace std;
int sum(int d){
    int a = d%10;
    int s = a+sum(d/10);
    cout<<s<<endl;
}
int main(){
    int t;
    cin>>t;
    cout<<sum(t);
}