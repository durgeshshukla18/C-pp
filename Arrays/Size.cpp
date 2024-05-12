#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,0};
    int sizebits = sizeof(arr);
    int length = sizeof(arr)/sizeof(arr[5]);
    cout<<sizebits<<endl;
    cout<<length;
}
