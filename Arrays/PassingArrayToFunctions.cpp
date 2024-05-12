#include<iostream>
using namespace std;
void change(int arr[]){
    arr[0]=18;
}
int main(){
    int a[3]={1,2,3};
    for(int i=0;i<3;i++){
        cout<<a[i]<<" ";
    }
    change(a);
    cout<<endl;
    for(int i=0;i<3;i++){
        cout<<a[i]<<" ";
    }
}