#include<iostream>
using namespace std;
int sum(int a,int b){
    int c=a+b;
return c;
}

int main(){
    cout<<"enter avalue for a"<<endl;
    int a;
    cin>>a;
    cout<<"enter avalue for b"<<endl;
    int b;
    cin>>b;
    cout<<"the sum of a and b is:   "<<sum(a,b)<<endl;
    
    return 0;
}