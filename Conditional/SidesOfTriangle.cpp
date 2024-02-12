#include<iostream>
using namespace std;
int main(){
    float x,y,z;
    cout<<"Enter the sides: ";
    cin>>x;
    cin>>y;
    cin>>z;
    if((x+y)>z && (y+z)>x && (z+x)>y){
        cout<<"The sides are valid for triangle";
    }
    else{
        cout<<"The sides are not valid for the triangle";
    }
}