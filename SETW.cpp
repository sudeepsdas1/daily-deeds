#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    cout<<"enter value for a:"<<endl;
    int a;
    cin>>a;
    cout<<"enter value for b:"<<endl;
    int b;
    cin>>b;
    cout<<"enter value for c:"<<endl;
    int c;
    cin>>c;

    cout<<"the value of a: "<<setw(4)<<a<<endl;
    cout<<"the value of b: "<<setw(4)<<b<<endl;
    cout<<"the value of c: "<<setw(4)<<c<<endl;
    return 0;
}