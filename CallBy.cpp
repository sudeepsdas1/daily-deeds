#include<iostream>
using namespace std;
int swapReferenceVar(int &a,int &b){
    int temp = a;
    a=b;
    b=temp;
}
int main(){
    cout<<"enter value for a:"<<endl;
    int a;
    cin>>a;
     cout<<"enter value for b:"<<endl;
    int b;
    cin>>b;
    swapReferenceVar(a,b);
    cout<<"the value of a is:  "<<a<<"    the value of b is:   "<<b<<endl;
    return 0;

}