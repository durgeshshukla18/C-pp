#include<iostream>
using namespace std;
int sum(int s){
    if(s<10){
        return s;
    }
    return (s%10)+(sum(s/10));

}
int superDigit(int x){
    int a = sum(x);
    while(a>10){
        return sum(a);
        a/=10;
    }
    // if(a<10){
    //     return a;
    // }else{
    //     return sum(a);
    // }
}

int main(){
    int t,r;
    cin>>t>>r;
    int y = superDigit(t);
    cout<<y*r;
}