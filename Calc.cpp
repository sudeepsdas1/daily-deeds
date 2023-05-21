#include<iostream>
using namespace std;
int main(){
    cout<<"This is a C++ file named switch calculator"<<endl;
    cout<<"enter value of a:"<<endl;
    int a;
    cin>>a;
    cout<<"enter value of b:"<<endl;
    int b;
    cin>>b;
    char op;
    cout<<"Enter operator: "<<endl;
    cin>>op;
    switch (op)
    {
    case ('+'):
        cout<<a+b<<endl;
        break;
    
    case ('-'):
        cout<<a-b<<endl;
        break;
    
    case ('*'):
       cout<<a*b<<endl;
        break;
    
    case ('/'):
        cout<<a/b<<endl;
        break;
    
    default:
    cout<<"this operator is not available"<<endl;
        break;
    }

    return 0;

}