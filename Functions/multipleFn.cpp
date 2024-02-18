#include<iostream>
using namespace std;
void usa(){
    cout<<"USA"<<endl;
}
void india(){
    cout<<"INDIA"<<endl;
    usa();
}
int main(){
    cout<<"Main"<<endl;
    india();
    usa();
}