#include<iostream>
using namespace std;
int Product(int a, int b){
    int c=a*b;
    return c;
}
int main(){
    cout<<"enter the value for a"<<endl;
    int a;
    cin>>a;
    cout<<"enter the value for b"<<endl;
    int b;
    cin>>b;
    cout<<"the product of a and b is:  "<<Product(a,b)<<endl;
    return 0;

}