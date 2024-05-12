#include<iostream>
using namespace std;
int table(int x){
    for(int i=1;i<=10;i++){
        int p = i*x;
        cout<<p<<endl;
    }
}
int main(){
    int a;
    cin>>a;
    cout<<table(a);
}