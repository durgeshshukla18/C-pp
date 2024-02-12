// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     for(int i=2;i<n/2;i++){
//         if(n%i==0)
//         cout<<"Number is a composite number.";
//         break;
//     }

// }


#include<iostream>
using namespace std;
int main(){
    int n;
    int a =0;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=2;i<n/2;i++){
        if(n%i==0)
        a=1;
    }
    if(a==1)
    {
        cout<<"Number is a composite number.";
        
    }
    else
        cout<<"Number is a not composite number.";

}
    